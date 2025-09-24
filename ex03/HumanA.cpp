#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
    _name = name;
}

HumanA::~HumanA() {
}

void	HumanA::HumanA::setWeapon(Weapon& weapon) {
	_weapon = weapon;
}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
