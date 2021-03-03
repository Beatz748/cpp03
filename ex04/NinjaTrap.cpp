#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_name = "NinjaTRAP";
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "SC4V-TP " << _name << " created" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const name)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << _name
				<< " deleted"
				<< std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& right)
{
	*this = right;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& right)
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

void	NinjaTrap::ninjaShoebox(FragTrap const & right) const
{
	std::cout << "heh, u r FragTrap " << right.getname()
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & right) const
{
	std::cout << "heh, u r scavTrap " << right.getname()
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & right) const
{
	std::cout << "heh, u r clapTrap " << right.getname()
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & right) const
{
	std::cout << "heh, u r ninjaTrap " << right.getname()
		<< std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
				<< " attacks "
				<< target
				<< " in melee, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}
