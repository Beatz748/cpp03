#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

private:


public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap &fragTrap);
	FragTrap		&operator=(const FragTrap &fragTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			vaulthunter_dot_exe(std::string const &target);

};

#endif
