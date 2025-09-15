/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:43:30 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 13:01:02 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// OCF (public)

FragTrap::FragTrap( const std::string &name ) : ClapTrap(name)
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
	std::cout << "FragTrap: Default constructor called" << std::endl;
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


// void FragTrap::attack( const std::string &target )
// {
// 	if (this->_hit_p <= 0)
// 	{
// 		std::cout	<< "ScavTrap " << this->_name << " cannot attack, it is now dead as it has 0 hit point" << "\n"
// 					<< std::endl;
// 		return ;
// 	}
// 	else if (this->_energy_p <= 0)
// 	{
// 		std::cout	<< "ScavTrap " << this->_name << " cannot attack, it is now dead as it has reached 0 energy point" << "\n"
// 					<< std::endl;
// 		return ;
// 	}

// 	--this->_energy_p;
// 	std::cout	<< "Scavtrap " << this->_name << " attacks " << target
// 				<< ", causing " << this->_attack_dmg << " points of damage onto " << target
// 				<< " and " << this->_name << " lose 1 energy point. "
// 				<< "Hit point ( " << this->_hit_p << " ), "
// 				<< "Energy point ( " << this->_energy_p << " )"
// 				<< std::endl; 
// }
