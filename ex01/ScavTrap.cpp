/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:11:04 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 11:10:46 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// OCF (public)

// a base class must be fully constructed before derived class constructor body {} runs, thats why we call base class's constructor at the initializer list. the {} is only for assigning new values only
ScavTrap::ScavTrap( const std::string &name ) 
: ClapTrap(name) // constructor chaining & construction phase (top-down) - base class must be constructed 1st, only then the derived class's constructor passing the same name
// , testing(10) // this is allowed since its 1st time initialized in this class, either its private/protected
// , _hit_p(100) // these cannot be in the initializer list because they are already 1st time initialized in ClapTrap
// , _energy_p(50)
// , _attack_dmg(20)
{
	this->_hit_p = 100; // they are assigned with new values so must be put in {} body, already initialized at ClapTrapd
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
	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode" << std::endl;
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
