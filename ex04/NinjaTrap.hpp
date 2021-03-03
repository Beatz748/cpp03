#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	NinjaTrap : public virtual ClapTrap
{
	public:
		void			challengeNewcomer();
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(NinjaTrap const& right);
	NinjaTrap(std::string const name);
	NinjaTrap& operator=(NinjaTrap const& right);
	void	ninjaShoebox(FragTrap const & right) const;
	void	ninjaShoebox(ScavTrap const & right) const;
	void	ninjaShoebox(ClapTrap const & right) const;
	void	ninjaShoebox(NinjaTrap const & right) const;
	void	meleeAttack(std::string const &target);
};

#endif
