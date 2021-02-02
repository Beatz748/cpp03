#pragma FRAGTRAP_HPP

# include <string>
# include <iostream>

# define SUCCESS	0

class	FragTrap
{
	private:
		unsigned int	_hit_points;
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
		void	beRepaired(unsigned int amount);
		FragTrap& operator=(FragTrap const& right);
};
