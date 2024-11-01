#include "Harl.hpp"

#define _DEBUG 'D' + 'E' + 'B' + 'U' + 'G'
#define _INFO 'I' + 'N' + 'F' + 'O'
#define _WARNING 'W' + 'A' + 'R' + 'N' + 'I' + 'N' + 'G'
#define _ERROR 'E' + 'R' + 'R' + 'O' + 'R'

void Harl::debug(void)
{
	std::cout << "\033[32m" << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\033[0m" << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "\033[33m" << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\033[0m" << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\033[34m" << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\033[0m" << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << "\033[35m" << "[ ERROR ]" << std::endl <<  "This is unacceptable! I want to speak to the manager now." << "\033[0m" << std::endl << std::endl;
}

void Harl::complain(const std::string &level)
{
	int which = 0;

	for (std::string::const_iterator i = level.begin(); i != level.end(); i++)
		which += *i;
	switch (which)
	{
		case _DEBUG:
			Harl::debug();
		case _INFO:
			Harl::info();
		case _WARNING:
			Harl::warning();
		case _ERROR:
			Harl::error();
			break;
		default:
			std::cerr << "\033[31m" << "[ Probably complaining about insignificant problems ]" << "\033[0m" << std::endl << std::endl;
	}
}
