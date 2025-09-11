/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/11 11:32:05 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	const std::string d = "Derek";
	
	ClapTrap a("Abu");
	a.attack(d);
	a.beRepaired(3);
	a.takeDamage(5);

	std::cout << std::endl;
	ScavTrap b("Bob");
	b.attack(d);
	b.beRepaired(3);
	b.takeDamage(5);

	std::cout << std::endl;
	ClapTrap *c = new ScavTrap("Serene");
	c->attack(d);
	c->beRepaired(3);
	c->takeDamage(5);
	std::cout << std::endl;
	delete c;

	return 0;
}