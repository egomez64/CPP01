#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
private:

	Weapon &_weapon;
	std::string _name;

public:
	~HumanA();
	HumanA(std::string name, Weapon &weapon);
	void setWeapon(Weapon weapon);
	void attack();
};

#endif
