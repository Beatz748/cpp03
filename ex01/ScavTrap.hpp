#pragma SCAVTRAP_HPP

# include <iostream>
# include <string>

class	ScavTrap
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
		void			challengeNewcomer();
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap & right);
	ScavTrap(std::string const name);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};
