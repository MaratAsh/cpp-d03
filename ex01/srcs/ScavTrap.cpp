//
// Created by Altagracia Cierra on 11/16/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setHealth(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::~ScavTrap()
{

}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this == &copy)
		return *this;
	std::string str = copy.getName();
	this->setName(str);
	this->setHealth(copy.getHealth());
	this->setEnergy(copy.getEnergy());
	this->setAttack(copy.getAttack());
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << getName() << " Gate keeper mod ON" << std::endl;
}
