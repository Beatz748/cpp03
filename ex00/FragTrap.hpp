#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class	FragTrap
{
	private:
		unsigned int	_hit_point;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;
	public:
		~FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const& right);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaierd(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
		FragTrap& operator=(FragTrap const& right);
};

#endif
