#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	_type = type;
}

void Weapon::setType(std::string type) {
	_type = type;
}

std::string &Weapon::getType() {
	std::string& typeREF = _type;
	return typeREF;
}

Weapon::~Weapon() {}