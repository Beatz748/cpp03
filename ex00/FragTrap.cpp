#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name)
{
	std::cout << "Calling constructor" << std::endl;
	_hit_point = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _name <<
}

FragTrap::~FragTrap()
{
	std::cout << "Called destructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const& right)
{
	*this = right;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name
				<< "attacks "
				<< target
				<< " at range, causing "
				<< _ranged_attack_damage
				<< " points of damage!"
				<< std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& right)
{
	this->_hit_point = right._hit_point;
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

}
void	FragTrap::takeDamage(unsigned int amount)
{
	if
}
void	FragTrap::beRepaierd(unsigned int amount)
{

}
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{

}
