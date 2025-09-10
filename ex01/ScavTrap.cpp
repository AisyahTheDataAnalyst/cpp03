/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:11:04 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/10 20:58:40 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// OCF

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap")
{
	this->_hit_p = 100;
	this->_energy_p = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string &name ) 
: ClapTrap(name)
, _hit_p(100)
, _energy_p(50)
, _attack_dmg(20)
{
	std::cout << "ScavTrap: parameterized constructor for " << name << " called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{

}

ScavTrap &operator=( const ScavTrap &other )
{

}

ScavTrap::~ScavTrap()
{
	std::cout	<< "Destructor of ScavTrap called on "
				<< this->_name
				<< std::endl;
}

// function member:
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode" << std::endl;
}