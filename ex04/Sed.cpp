#include "Sed.hpp"
#include <sstream>

bool Sed::parse(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (s1.empty() || s2.empty())
		return false;
	std::fstream file(filename.c_str(), std::ios::in);
	if (!file.is_open())
		return false;
	std::fstream file_out(std::string(filename + ".replace").c_str(), std::ios::out);
	if (!file_out.is_open())
	{
		file.close();
		return false;
	}
	std::ostringstream ss;
	ss << file.rdbuf();
	std::string buf;
	buf = ss.str();
	if (s1 != s2)
	{
		size_t i = 0;
		while ((i = buf.find(s1, i)) != std::string::npos)
		{
			buf.erase(i, s1.size());
			buf.insert(i, s2);
			i += s2.size();
		}
	}
	file_out << buf;
	file_out.close();
	file.close();
	return true;
}