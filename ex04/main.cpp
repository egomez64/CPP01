#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	Sed::parse(av[1], av[2], av[3]);
	return 0;
}