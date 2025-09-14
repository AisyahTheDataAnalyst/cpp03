/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/15 07:26:09 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();
		FragTrap( const FragTrap &other );
		FragTrap &operator=( const FragTrap &other );

	public:
		FragTrap( const std::string &name );
		~FragTrap();
		void highFivesGuys(void);
};

#endif