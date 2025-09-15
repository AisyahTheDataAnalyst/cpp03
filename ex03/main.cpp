/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:15:56 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 12:36:26 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	const std::string z = "Zack";
	
	std::cout << BLUE << "\nAbu's actions:" << RESET << std::endl;
	ClapTrap a("Abu");
	a.attack(z);
	a.takeDamage(5);
	a.beRepaired(3);
	// a.guardGate();        // cant be use coz ClapTrap dosent have these fn
	// a.highFivesGuys(); 		
	// a.whoAmI();

	std::cout << BLUE << "\nBob's actions:" << RESET << std::endl;
	ScavTrap b("Bob");
	b.attack(z);
	b.takeDamage(5);
	b.beRepaired(3);
	b.guardGate();        
	// b.highFivesGuys();    // cant be use coz ScavTrap dosent have these fn
	// b.whoAmI();

	std::cout << BLUE << "\nCedric's actions:" << RESET << std::endl;
	FragTrap c("Cedric");
	c.attack(z);
	c.takeDamage(5);
	c.beRepaired(3);
	c.highFivesGuys();
	// c.guardGate();        // cant be use coz FragTrap dosent have these fn    
	// c.whoAmI();

	std::cout << BLUE << "\nDerek's actions:" << RESET << std::endl;
	DiamondTrap d("Derek");
	d.attack(z);
	d.takeDamage(5);
	d.beRepaired(3);
	d.highFivesGuys();
	d.guardGate();        
	d.whoAmI();

	std::cout << BLUE << "\nSerene's actions:" << RESET << std::endl;
	ClapTrap *e = new DiamondTrap("Serene"); // runtime polymorphism = one interface (ClapTrap) many forms(ScavTrap, FragTrap, DiamondTrap)
										  // create an object of type DiamondTrap on the heap return a pointer of type DiamondTrap, store it into a pointer variable type ClapTrap (possible because DiamondTrap inherits from ClapTrap)
	e->attack(z); 			// virtual fn mechanism ensures the correct derived method is called at runtime
	e->takeDamage(5);
	e->beRepaired(3);
	// e->highFivesGuys(); 	// these 3 fn cant be used coz its not in ClapTrap's interface, compiler only lets u use the interface that ClapTrap defines
	// e->guardGate();        
	// e->whoAmI();	
	std::cout << std::endl;
	delete e;

	std::cout << BLUE << "\nReferencing:" << RESET << std::endl;
	ClapTrap &ref = d;    // no slicing coz you copy to a base object
	ref.attack(z);        // virtual
	ref.takeDamage(5);
	ref.beRepaired(3);
	// ref.highFivesGuys();
	// ref.guardGate();
	// ref.whoAmI();

	std::cout << BLUE << "\nPointers:" << RESET << std::endl;
	FragTrap *ptr = &d;   // no slicing coz you copy to a base object
	ptr->attack(z);      
	ptr->takeDamage(5);
	ptr->beRepaired(3);
	ptr->highFivesGuys();
	// ptr->guardGate();
	// ptr->whoAmI();
	std::cout << std::endl;
	
		
	// DiamondTrap g; // these are not allowed by the subjects, instances must not interact with each other
	// g = b;
	// DiamondTrap h(b);

	return 0;
}