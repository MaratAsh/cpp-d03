//
// Created by Altagracia Cierra on 11/16/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks "
			  << target << ", causing " << _attack
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ClapTrap " << _name << " take damage "
			  << amount << ", current health " << _health  << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	_energy--;
	_health += amount;
	std::cout << "ClapTrap " << _name << " be repaired on "
			  << amount << ", current health " << _health  << std::endl;
}

std::string &ClapTrap::getName()
{
	return _name;
}

void ClapTrap::setName(std::string &name)
{
	_name = name;
}

int ClapTrap::getHealth()
{
	return _health;
}

void ClapTrap::setHealth(int health)
{
	_health = health;
}

int ClapTrap::getEnergy()
{
	return _energy;
}

void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}

int ClapTrap::getAttack()
{
	return _attack;
}

void ClapTrap::setAttack(int attack)
{
	_attack = attack;
}


std::string ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getHealth() const
{
	return _health;
}

int ClapTrap::getEnergy() const
{
	return _energy;
}

int ClapTrap::getAttack() const
{
	return _attack;
}
