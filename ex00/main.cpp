/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:53:38 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/10 16:26:05 by aimokhta         ###   ########.fr       */
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

	// can attack/repair if neither of _hit_p / _energy_p is 0
	std::cout << BLUE << "\nAdam's actions:" << RESET << std::endl;
	a.attack(c);
	a.takeDamage(5);
	a.beRepaired(3);
	a.attack(c);

	// cannot attack/repair if _hit_p is 0
	std::cout << BLUE << "\nBarney's actions:" << RESET << std::endl;
	b.attack(c);
	b.takeDamage(10);
	b.beRepaired(0);
	b.attack(c);

	// cannot attack/repair if _energy_p is 0
	std::cout << BLUE << "\nFrozone's actions:" << RESET << std::endl;
	f.attack(c);
	f.attack(c);
	f.attack(c);
	f.attack(c);
	f.attack(c);
	f.beRepaired(1);
	f.beRepaired(1);
	f.beRepaired(1);
	f.beRepaired(1);
	f.beRepaired(1);
	f.attack(c);
	
	return (0);
}