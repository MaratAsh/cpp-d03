//
// Created by Altagracia Cierra on 11/16/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
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
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << _name << " Gate keeper mod ON" << std::endl;
}
