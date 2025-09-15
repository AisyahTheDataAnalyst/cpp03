/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:11:04 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 12:13:10 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// OCF (public)

ScavTrap::ScavTrap( const std::string &name ) 
: ClapTrap(name)
{
	this->_hit_p = 100;
	this->_energy_p = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap: Parameterized constructor called on " << this->_name << std::endl;
}

// Destructors are called reversely
// No derived class runs after its base is gone.
// No member runs after something it might depend on is gone.
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called on " << this->_name << std::endl;
}

// -------------------------------------------------------
// OCF (private)

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_p = 100;
	this->_energy_p = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{
	*this = other;
	std::cout << "ScavTrap: Copy constructor called on " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg;
	}
	std::cout << "ScavTrap: Assignment operator called on " << this->_name << std::endl;
	return *this;
}


// ------------------------------------------------------------
// function member:
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack( const std::string &target )
{
	if (this->_hit_p <= 0)
	{
		std::cout	<< "ScavTrap " << this->_name << " cannot attack, it is now dead as it has 0 hit point" << "\n"
					<< std::endl;
		return ;
	}
	else if (this->_energy_p <= 0)
	{
		std::cout	<< "ScavTrap " << this->_name << " cannot attack, it is now dead as it has reached 0 energy point" << "\n"
					<< std::endl;
		return ;
	}

	--this->_energy_p;
	std::cout	<< "Scavtrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack_dmg << " points of damage onto " << target
				<< " and " << this->_name << " lose 1 energy point. "
				<< "Hit point ( " << this->_hit_p << " ), "
				<< "Energy point ( " << this->_energy_p << " )"
				<< std::endl; 
}
