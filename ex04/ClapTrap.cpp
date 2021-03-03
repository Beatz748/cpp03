#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "CLAPTRAP";
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "CL4P-TP " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
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
	std::cout << "CL4P-TP " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name
				<< " deleted"
				<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& right)
{
	*this = right;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& right)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	save;

	save = amount;
	if (_hit_points == 0)
	{
		std::cout << "CL4P-TP "
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
	std::cout << "CL4P-TP "
				<< _name
				<< " takes " << save
				<< " points of damage" 
				<< " now HEALTH = "
				<< _hit_points
				<< std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + _hit_points > _max_hit_points)
		_hit_points = _max_hit_points;
	else
		_hit_points += amount;
	std::cout << "CL4P-TP "
				<< _name
				<< " repaired "
				<< amount << " health and now have "
				<< _hit_points << " points " << std::endl;
}

std::string	ClapTrap::getname() const
{
	return (_name);
}
