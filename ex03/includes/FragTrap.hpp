//
// Created by Altagracia Cierra on 11/17/22.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	FragTrap();

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &copy);

	void highFivesGuys(void);
};

#endif
