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
};
