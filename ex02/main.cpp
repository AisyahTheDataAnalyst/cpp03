/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:09:30 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 13:14:08 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
	const std::string d = "Derek";
	
	std::cout << BLUE << "\nAbu's actions:" << RESET << std::endl;
	ClapTrap a("Abu");
	a.attack(d);
	a.takeDamage(5);
	a.beRepaired(3);
	// a.highFivesGuys(); 		// cant be use coz ClapTrap dosent have this fn

	std::cout << BLUE << "\nBob's actions:" << RESET << std::endl;
	FragTrap b("Bob");
	b.attack(d);
	b.takeDamage(5);
	b.beRepaired(3);
	b.highFivesGuys();

	std::cout << BLUE << "\nSerene's actions:" << RESET << std::endl;
	ClapTrap *c = new FragTrap("Serene"); // runtime polymorphism = one interface (ClapTrap) many forms(FragTrap, FragTrap(ex02), etc)
										  // create an object of type FragTrap on the heap return a pointer of type FragTrap, store it into a pointer variable type ClapTrap (possible because FragTrap inherits from ClapTrap)
	c->attack(d);
	c->takeDamage(5);
	c->beRepaired(3);
	// c->highFivesGuys(); 		// cant be used coz its not in ClapTrap's interface, compiler only lets u use the interface that ClapTrap defines
	std::cout << std::endl;
	delete c;

	// FragTrap e; // these are not allowed by the subjects, instances must not interact with each other
	// e = b;
	// FragTrap f(b);

	return 0;
}