#pragma SCAVTRAP_HPP

# include <iostream>
# include <string>
# include  "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		void			challengeNewcomer();
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const& right);
	ScavTrap(std::string const name);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	challengeNewcomer(std::string const& target);
	ScavTrap& operator=(ScavTrap const& right);
};
