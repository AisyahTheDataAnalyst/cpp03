/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:43:30 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 12:40:03 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// OCF (public)

// a base class must be fully constructed before derived class constructor body {} runs, thats why we call base class's constructor at the initializer list. the {} is only for assigning new values only
FragTrap::FragTrap( const std::string &name ) 
: ClapTrap(name) // constructor chaining & construction phase (top-down) - base class must be constructed 1st, only then the derived class's constructor passing the same name
{
	this->_hit_p = 100;
	this->_energy_p = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap: Parameterized constructor called on " << this->_name << std::endl;
}

// Destructors are called reversely
// No derived class runs after its base is gone.
// No member runs after something it might depend on is gone.
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called on " << this->_name << std::endl;
}

// -------------------------------------------------------
// OCF (private)

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit_p = 100;
	this->_energy_p = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap: Default constructor is called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other )
{
	*this = other;
	std::cout << "FragTrap: Copy constructor called on " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_p = other._hit_p;
		this->_energy_p = other._energy_p;
		this->_attack_dmg = other._attack_dmg;
	}
	std::cout << "FragTrap: Assignment operator called on " << this->_name << std::endl;
	return *this;
}

// ---------------------------------------------------------------
// function member:

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests high-fives!" << std::endl;
}
