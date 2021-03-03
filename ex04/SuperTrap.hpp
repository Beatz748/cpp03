#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		~SuperTrap();
		SuperTrap(SuperTrap const& right);
		SuperTrap(std::string const name);
		SuperTrap& operator=(SuperTrap const& right);
		void	meleeAttack(std::string const & right);
		void	rangedAttack(std::string const & right);
};

#endif
