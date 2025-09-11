/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:09:30 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/11 15:14:33 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
	const std::string d = "Derek";
	
	ClapTrap a("Abu");
	a.attack(d);
	a.beRepaired(3);
	a.takeDamage(5);
	// a.highFivesGuys(); 		// cant be use coz ClapTrap dosent have this fn

	std::cout << std::endl;
	FragTrap b("Bob");
	b.attack(d);
	b.beRepaired(3);
	b.takeDamage(5);
	b.highFivesGuys();

	std::cout << std::endl;
	ClapTrap *c = new FragTrap("Serene"); // runtime polymorphism = one interface (ClapTrap) many forms(FragTrap, FragTrap(ex02), etc)
										  // create an object of type FragTrap on the heap return a pointer of type FragTrap, store it into a pointer variable type ClapTrap (possible because FragTrap inherits from ClapTrap)
	c->attack(d); 			// virtual fn mechanism ensures the correct derived method is called at runtime
	c->beRepaired(3);
	c->takeDamage(5);
	// c->highFivesGuys(); 		// cant be used coz its not in ClapTrap's interface, compiler only lets u use the interface that ClapTrap defines
	std::cout << std::endl;
	delete c;

	return 0;
}