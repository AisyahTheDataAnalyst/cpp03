/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:00:53 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 07:11:47 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// OFC (public)

DiamondTrap::DiamondTrap ( const std::string &name ) 
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	this->_hit_p = FragTrap::_hit_p;
	this->_energy_p = ScavTrap::_energy_p;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "DiamondTrap: Parameterized constructor called on " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called on " << this->name << std::endl;
}

// -----------------------------------------------------------
// OCF (private)

DiamondTrap::DiamondTrap( void ) 
: ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), name("Default")
{
	std::cout << "DiamondTrap: Default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
{
	*this = other;
	std::cout << "DiamondTrap: Copy constructor is called on " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
{
	if (this != &other)
	{
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg;
	}
	std::cout << "DiamondTrap: Assignment operator overload is called on " << this->name << std::endl;
	return *this;
}

// ----------------------------------------------------------------
// member function

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap: I am " << this->name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}