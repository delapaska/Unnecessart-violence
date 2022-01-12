#pragma once
#include <iostream>
#include <cstdlib>
class Weapon {
private:
	std::string WeaponName;
public:
	
	const std::string &getWeapon() const;
	void setWeapon(const std::string& name);

};
