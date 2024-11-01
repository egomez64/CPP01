#include "Harl.hpp"
#include <map>

void Harl::debug(void)
{
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string &level)
{
	int which = 0;

	for (std::string::const_iterator i = level.begin(); i != level.end(); i++)
		which += *i;
	switch (which)
	{
		case 'D' + 'E' + 'B' + 'U' + 'G':
			Harl::debug();
		case 'I' + 'N' + 'F' + 'O':
			Harl::info();
		case 'W' + 'A' + 'R' + 'N' + 'I' + 'N' + 'G':
			Harl::warning();
		case 'E' + 'R' + 'R' + 'O' + 'R':
			Harl::error();
	}
}