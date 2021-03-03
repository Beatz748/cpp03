#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
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

ScavTrap::ScavTrap(std::string const name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = name;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "SC4V-TP " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name
				<< " deleted"
				<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& right)
{
	*this = right;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name
				<< " attacks "
				<< target
				<< " at range, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& right)
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

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name
				<< " attacks "
				<< target
				<< " in melee, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	srand(time(NULL));
	std::string full[5] = {"kicked", "cracked", "оглушил", "шибанул", "шарахнул"};

	std::cout << "SC4V-TP " << this->_name
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
