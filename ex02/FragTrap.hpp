/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:39:28 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/11 15:11:37 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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