#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// this is a derived class / child class 
// = created from an existing class (ClapTrap)
// = accepts inheritance of members from the base class(ClapTrap)

class ScavTrap : public ClapTrap // public inheritance: ScavTrap publicly inherits everything that's public & protected in ClapTrap
{
	private:
		// int testing;
		ScavTrap( const ScavTrap &other );
		ScavTrap &operator=( const ScavTrap &other );
		ScavTrap();

	// protected:
	// 	int testing;
	
	public:
		// OCF
		ScavTrap( const std::string &name );
		~ScavTrap();
		
		// function member:
		void guardGate();
		void attack(  const std::string &target );
};

#endif