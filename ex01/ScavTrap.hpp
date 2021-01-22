#pragma SCAVTRAP_HPP

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
	public
	void		challengeNewcomer();
	ScavTrap();
	~ScavTrap()
}
