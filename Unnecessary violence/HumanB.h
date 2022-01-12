#pragma once
#include <iostream>
#include <cstdlib>
#include "Weapon.h"
class HumanB {
private:
	std::string Name;
	std::string GunName;
public:
	void attack();
	const std::string& getName() const;
	void setGun(const std::string& name);
	void setName(const std::string& name);
};