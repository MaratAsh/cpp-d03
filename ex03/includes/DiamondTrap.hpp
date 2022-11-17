//
// Created by Altagracia Cierra on 11/17/22.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
	DiamondTrap();

public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator=(DiamondTrap const &copy);

	void whoAmI();
	void attack(const std::string& target);
};

#endif
