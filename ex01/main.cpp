/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 12:09:23 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	const std::string d = "Derek";
	
	std::cout << BLUE << "\nAbu's actions:" << RESET << std::endl;
	ClapTrap a("Abu");
	a.attack(d);
	a.takeDamage(5);
	a.beRepaired(3);
	// a.guardGate(); 		// cant be use coz ClapTrap dosent have this fn

	std::cout << BLUE << "\nBob's actions:" << RESET << std::endl;
	ScavTrap b("Bob");
	b.attack(d);
	b.takeDamage(5);
	b.beRepaired(3);
	b.guardGate();

	std::cout << BLUE << "\nSerene's actions:" << RESET << std::endl;
	ClapTrap *c = new ScavTrap("Serene"); // runtime polymorphism = one interface (ClapTrap) many forms(ScavTrap, FragTrap(ex02), etc)
										  // create an object of type ScavTrap on the heap return a pointer of type ScavTrap, store it into a pointer variable type ClapTrap (possible because ScavTrap inherits from ClapTrap)
	c->attack(d); 			// virtual fn mechanism ensures the correct derived method is called at runtime
	c->takeDamage(5);
	c->beRepaired(3);
	// c->guardGate(); 		// cant be used coz its not in ClapTrap's interface, compiler only lets u use the interface that ClapTrap defines
	std::cout << std::endl;
	delete c;

	// ScavTrap e; // these are not allowed by the subjects, instances must not interact with each other
	// e = b;
	// ScavTrap f(b);

	return 0;
}


// example usage of runtime polymorphism:
// class Animal 
// {
// public:
//     virtual void makeSound() const {
//         std::cout << "Some generic animal sound\n";
//     }
// };

// class Dog : public Animal 
// {
// public:
//     void makeSound() const {
//         std::cout << "Woof!\n";
//     }
// };

// class Cat : public Animal 
// {
// public:
//     void makeSound() const {
//         std::cout << "Meow!\n";
//     }
// };
// Now you can write code like:

// Animal* a1 = new Dog();
// Animal* a2 = new Cat();

// a1->makeSound();  // "Woof!"
// a2->makeSound();  // "Meow!"

// another version:
// std::vector<Animal*> zoo;

// zoo.push_back(new Dog());
// zoo.push_back(new Cat());
// // later you could push_back a Bird, Tiger, etc.

// for (size_t i = 0; i < zoo.size(); i++) {
//     zoo[i]->makeSound();  // Works for ALL animals
// }