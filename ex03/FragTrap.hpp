/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 07:27:01 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTAP_HPP

#include "ClapTrap.hpp"

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
};

#endif