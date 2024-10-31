#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name){}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB() {}