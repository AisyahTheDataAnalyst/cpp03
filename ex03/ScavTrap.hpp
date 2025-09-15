#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// this is the intermediate derived class
// = derived class of CLapTrap
// = base class of DiamondTrap

class ScavTrap : virtual public ClapTrap // public inheritance: ScavTrap publicly inherits everything that's public & protected in ClapTrap
{
	protected:
		ScavTrap( const ScavTrap &other );
		ScavTrap &operator=( const ScavTrap &other );
		ScavTrap();
	
	public:
		// OCF
		ScavTrap( const std::string &name );
		~ScavTrap();
		
		// function member:
		void guardGate();
		void attack(  const std::string &target );
};

#endif