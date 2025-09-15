/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 13:00:54 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

// this is the intermediate derived class
// = derived class of CLapTrap
// = base class of DiamondTrap

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
		FragTrap( const FragTrap &other );
		FragTrap &operator=( const FragTrap &other );

	public:
		FragTrap( const std::string &name );
		~FragTrap();
		void highFivesGuys(void);
		// void attack( const std::string &target );
};

#endif