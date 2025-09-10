/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:36:26 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/10 14:36:46 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _name;
		int			_hit_p;
		int			_energy_p;
		int			_attack_dmg;
		ClapTrap( void );
	
	public:
		// OCF
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		ClapTrap &operator=( const ClapTrap &other );
		~ClapTrap( void );

		//getter&setter
		
		// actions:
		void attack( const std::string &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
}

# endif