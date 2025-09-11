/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:11:04 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/11 15:17:18 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// OCF (private)

ScavTrap::ScavTrap( const ScavTrap &other )
{
	*this = other;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
	{
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg;
	}
	return *this;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_p = 100;
	this->_energy_p = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

// -------------------------------------------------------
// OCF (public)

ScavTrap::ScavTrap( const std::string &name ) 
: ClapTrap(name)
// , testing(10) // this is allowed since its 1st time initialized in this class, either its private/protected
// , _hit_p(100) // these cannot be in the initializer list because they are already 1st time initialized in ClapTrap
// , _energy_p(50)
// , _attack_dmg(20)
{
	std::cout << "ScavTrap: Parameterized constructor called on " << name << std::endl;
	this->_hit_p = 100;
	this->_energy_p = 50;
	this->_attack_dmg = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called on " << this->_name << std::endl;
}

// ------------------------------------------------------------
// function member:
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack( const std::string &target )
{
	if (this->_hit_p <= 0)
	{
		std::cout	<< this->_name << " cannot attack, it is now dead as it has 0 hit point" << "\n"
					<< std::endl;
		return ;
	}
	else if (this->_energy_p <= 0)
	{
		std::cout	<< this->_name << " cannot attack, it is now dead as it has reached 0 energy point" << "\n"
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
