/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:42:03 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 07:39:22 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// OCF (public)

ClapTrap::ClapTrap( const std::string &name ) 
: _name(name), _hit_p(10), _energy_p(10), _attack_dmg(0) 
{
	std::cout << "ClapTrap: Parameterized constructor called on " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap: Destructor called on " << this->_name << std::endl;
}


// --------------------------------------------------
// OCF (protected)

ClapTrap::ClapTrap( void ) 
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	*this = other;
	std::cout << "ClapTrap: Copy constructor called on " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg; // should be maintain
	}
	std::cout << "ClapTrap: Assignment operator called on " << this->_name << std::endl;
	return *this;
}


// -------------------------------------------------
// actions functions

void ClapTrap::attack( const std::string &target )
{
	if (this->_hit_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " cannot attack, it is now dead as it has 0 hit point" << std::endl;
		return ;
	}
	else if (this->_energy_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " cannot attack, it is now dead as it has reached 0 energy point" << std::endl;
		return ;
	}

	--this->_energy_p;
	std::cout	<< "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack_dmg << " points of damage onto " << target
				<< " and " << this->_name << " lose 1 energy point. "
				<< "Hit point ( " << this->_hit_p << " ), "
				<< "Energy point ( " << this->_energy_p << " )"
				<< std::endl; 
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hit_p > 0 && this->_energy_p > 0)
	{
		this->_hit_p -= amount;
		std::cout	<< "ClapTrap " << this->_name << " is taking damage of "
					<< amount << " points, causing the lose of hit points. ";
	}
	if (this->_hit_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " is now dead as it has 0 hit point" << std::endl;
		return ;
	}
	else if (this->_energy_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " is now dead as it has reached 0 energy point" << std::endl;
		return ;
	}

	std::cout	<< "Hit point ( " << this->_hit_p << " ), "
				<< "Energy point ( " << this->_energy_p << " )"
				<< std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energy_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " cannot repair itself, it is now dead as it has reached 0 energy point" << std::endl;
		return ;
	}
	this->_hit_p += amount;
	if (this->_hit_p <= 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " cannot repair itself, it is now dead as it has 0 hit point" << std::endl;
		return ;
	}
	--this->_energy_p;
	std::cout	<< "ClapTrap " << this->_name << " is repairing itself of "
				<< amount << " points, causing lose of 1 energy point. "
				<< "Hit point ( " << this->_hit_p << " ), "
				<< "Energy point ( " << this->_energy_p << " )"
				<< std::endl;
}