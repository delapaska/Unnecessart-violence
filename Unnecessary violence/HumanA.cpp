#include <iostream>
#include <cstdlib>
#include "Weapon.h"
#include "HumanA.h"
const std::string& HumanA::getName() const {
	return Name;
}
void HumanA::setName(const std::string& name) {
	Name = name;

}
void HumanA::setGun(const std::string& name) {
	GunName = name;
}
void HumanA::attack() {
	std::cout << Name << " attacks with his " << GunName << std::endl;
}