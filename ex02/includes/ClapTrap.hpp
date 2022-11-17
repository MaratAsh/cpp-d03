//
// Created by Altagracia Cierra on 11/16/22.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
protected:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
	ClapTrap();

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(ClapTrap const &copy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif