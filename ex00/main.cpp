/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:53:38 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/10 16:38:22 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Adam");
	ClapTrap b("Barney");
	const std::string c = "Charlie";

	// rules: instances cannot interact with other instances, not even as a parameter
	// ClapTrap d;
	// ClapTrap e(a);
	ClapTrap f("Frozone");
	// f = a;

	// can attack/repair/takeDamage if neither of _hit_p / _energy_p is 0
	std::cout << BLUE << "\nAdam's actions:" << RESET << std::endl;
	a.attack(c);
	a.takeDamage(5);
	a.beRepaired(3);
	a.attack(c);

	// cannot attack/repair/takeDamage after _hit_p is 0
	std::cout << BLUE << "\nBarney's actions:" << RESET << std::endl;
	b.attack(c);
	b.takeDamage(10);
	b.beRepaired(0); // at this point, _hit_p=0, so no actions can be done anymore
	b.attack(c);
	b.takeDamage(2);

	// cannot attack/repair if _energy_p is 0
	std::cout << BLUE << "\nFrozone's actions:" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		f.attack(c);
	f.attack(c); // at this point, energy_p=0, so cannot do any repairing/attack/takeDamage anymore
	f.beRepaired(1);
	f.takeDamage(2);

	return (0);
}