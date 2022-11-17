//
// Created by Altagracia Cierra on 11/17/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "FragTrap";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::~FragTrap()
{

}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << _name << " high fives guys" << std::endl;
}
