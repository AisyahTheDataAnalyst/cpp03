/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:36:26 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 10:48:38 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define BLUE "\033[1;34m"
# define RESET "\033[0m"

// this is a base class / parent class = gives members to another class through inheritance
// this class is polyphormic - have at least 1 virtual function
// poly(many) morph(form) , polymorphic = having many forms = same interface(function name) behave differently dependimg on the actual object

class ClapTrap
{
	protected: // change from private originally to protected, so it can be accessed by both derived and base class, but not outside of both class
		std::string _name;
		int			_hit_p;
		int			_energy_p;
		int			_attack_dmg;
		ClapTrap( void );
		ClapTrap( const ClapTrap &other );
		ClapTrap &operator=( const ClapTrap &other );

	public:
		// OCF
		ClapTrap( const std::string &name );
		virtual ~ClapTrap( void ); // always make destructor virtual in polymorphic class - so it prints out both destrutors on base class and derived class despite not having the same name, tells tye compiler"please resolve this destructor dinamically, like other virtual methods"
		
		// actions:
		virtual void attack( const std::string &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

# endif