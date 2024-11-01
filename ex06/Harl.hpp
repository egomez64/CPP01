#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	static void complain(const std::string &level);

private:
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);
};

#endif