//
// Created by Altagracia Cierra on 11/16/22.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
protected:
	std::string &getName();
	void setName(std::string &name);
	int getHealth();
	void setHealth(int health);
	int getEnergy();
	void setEnergy(int energy);
	int getAttack();
	void setAttack(int attack);
	std::string getName() const;
	int getHealth() const;
	int getEnergy() const;
	int getAttack() const;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(ClapTrap const &copy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
