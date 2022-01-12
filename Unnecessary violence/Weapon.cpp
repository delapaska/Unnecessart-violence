#include "Weapon.h"
#include <iostream>
#include <cstdlib>
const std::string& Weapon::getWeapon() const {
	return WeaponName;
}
void Weapon::setWeapon(const std::string &name) {
	WeaponName = name;

}