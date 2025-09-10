#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// this is a derived class / child class 
// = created from an existing class (ClapTrap)
// = accepts inheritance of members from the base class(ClapTrap)

class ScavTrap : public ClapTrap // public inheritance: ScavTrap publicly inherits evrything that's public & protected in ClapTrap
{
	public:
		// OCF
		ScavTrap();
		ScavTrap( const std::string &name );
		ScavTrap( const ScavTrap &other );
		ScavTrap &operator=( const ScavTrap &other );
		~ScavTrap();
		
		// function member:
		void guardGate();
};

#endif