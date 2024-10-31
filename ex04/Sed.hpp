#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
public:
	static bool parse(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif