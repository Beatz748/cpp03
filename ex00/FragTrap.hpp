#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class	FragTrap
{
	private:
		unsigned int	hit_point_;
		unsigned int	max_hit_points_;
		unsigned int	energy_points_;
		unsigned int	max_energy_points_;
		unsigned int	level_;
		string			name_;
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaierd(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
}

#endif
