// Unnecessary violence.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main()
{
	Weapon club;
	club.setWeapon("crude spiked club");
	HumanA bob;
	bob.setName("bob");
	bob.setGun(club.getWeapon());
	bob.attack();
	club.setWeapon("another weapon");
	bob.setGun(club.getWeapon());
	bob.attack();
	HumanB jim;
	jim.setName("jim");
	club.setWeapon("one more gun");
	jim.setGun(club.getWeapon());
	jim.attack();
}