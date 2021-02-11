#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "SCAVTRAP";
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _name << " created" << std::endl;
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
void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	save;

	save = amount;
	if (_hit_points == 0)
	{
		std::cout << "SC4V-TP "
					<< "sorry but "
					<< _name << " is dead" << std::endl;
		return ;
	}
	if (_armor_damage_reduction > amount)
		amount = 0;
	else
		amount -= _armor_damage_reduction;
	if (_hit_points < amount)
		amount = _hit_points;
	_hit_points -= amount;
	std::cout << "SC4V-TP "
				<< _name
				<< " takes " << save
				<< " points of damage" 
				<< " now HEALTH = "
				<< _hit_points
				<< std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + _hit_points > _max_hit_points)
		_hit_points = _max_hit_points;
	else
		_hit_points += amount;
	std::cout << "SC4V-TP "
				<< _name
				<< " repaired "
				<< amount << " health and now have "
				<< _hit_points << " points " << std::endl;
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
