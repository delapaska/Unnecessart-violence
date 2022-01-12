#include <iostream>
#include <cstdlib>
#include "Weapon.h"
#include "HumanB.h"
const std::string& HumanB::getName() const {
	return Name;
}
void HumanB::setName(const std::string& name) {
	Name = name;

}
void HumanB::setGun(const std::string& name) {
	GunName = name;
}
void HumanB::attack() {
	std::cout << Name << " attacks with his " << GunName << std::endl;
}