#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = "SCAVTRAP";
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "SC4V-TP " << _name << " created" << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _name << " created" << std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout << _name
				<< " deleted"
				<< std::endl;
}

FragTrap::FragTrap(FragTrap const& right)
{
	*this = right;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
				<< " attacks "
				<< target
				<< " at range, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& right)
{
	this->_hit_points = right._hit_points;
	this->_max_hit_points = right._max_hit_points;
	this->_energy_points = right._energy_points;
	this->_max_energy_points = right._max_energy_points;
	this->_level = right._level;
	this->_name = right._name;
	this->_melee_attack_damage = right._melee_attack_damage;
	this->_ranged_attack_damage = right._ranged_attack_damage;
	this->_armor_damage_reduction = right._armor_damage_reduction;
	return (*this);
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
				<< " attacks "
				<< target
				<< " in melee, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}
void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	srand(time(NULL));
	std::string full[5] = {"Кричал", "Ударил ногой", "Ударил левой рукой", "Ударил правой рукой", "Дал по башке"};

	if (_energy_points < 25)
	{
		std::cout << "Not enough energy )=" << std::endl;
		return ;
	}
	_energy_points -= 25;
	std::cout << "FR4G-TP " << this->_name
				<< " attacks "
				<< target
				<< " "
				<< full[rand() % 5]
				<< " "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
	return ;
}
