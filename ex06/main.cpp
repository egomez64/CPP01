#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "\033[31m" << "[ Too few or too many arguments ]" << "\033[0m" << std::endl << std::endl;
		return 1;
	}
	Harl::complain(av[1]);
	return 0;
}