/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:31:44 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 07:27:01 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
		DiamondTrap();
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap &operator=( const DiamondTrap &other );

	public:
		DiamondTrap( const std::string &name );
		~DiamondTrap();
		void whoAmI();
		// attack???
};

#endif