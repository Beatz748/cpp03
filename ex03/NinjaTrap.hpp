#pragma NINJATRAP_HPP

# include <iostream>
# include <string>
# include  "ClapTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		void			challengeNewcomer();
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(NinjaTrap const& right);
	NinjaTrap(std::string const name);
	NinjaTrap& operator=(NinjaTrap const& right);
	void	ninjaShoebox(FragTrap const & right);
	void	ninjaShoebox(ScavTrap const & right);
	void	ninjaShoebox(ClapTrap const & right);
	void	ninjaShoebox(NinjaTrap const & right);
};
