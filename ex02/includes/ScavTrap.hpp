//
// Created by Altagracia Cierra on 11/16/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &copy);

	void guardGate();
};

#endif
