//
// Created by Altagracia Cierra on 11/17/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
}

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << _name << "\t" << ClapTrap::_name << std::endl;
}
