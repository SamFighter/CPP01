#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
    _name = name;
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon* weapon) {
	_weapon = weapon;
}

void	HumanB::attack() {
	if (_weapon == NULL)
		std::cout << _name << " attacks with their fists" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
