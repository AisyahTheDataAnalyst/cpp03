/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:42:03 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/10 14:36:40 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// --------------------------------------------------
// OCF

ClapTrap::ClapTrap( std::string name ) 
: _name(name), _hit_p(10), _energy_p(10), _attack_dmg(0) 
{
	std::cout	<< "Constructor called on "
				<< this->_name
				<< std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	*this = other;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg;
	}
	return *this
}

ClapTrap::~ClapTrap() 
{
	std::cout	<< "Destructor called on "
				<< this->_name 
				<< std::endl;
}


// -------------------------------------------------
// actions functions

void ClapTrap::attack( const std::string &target )
{


	std::cout	<< "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack_dmg << " points of damage!"
				<< std::endl; 
}

void ClapTrap::takeDamage( unsigned int amount )
{

}

void ClapTrap::beRepaired( unsigned int amount )
{

}