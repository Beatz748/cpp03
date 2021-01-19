#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "Calling constructor" << std::endl;
	name_ = name;
}

FragTrap::~FragTrap()
{
	std::cout << "Called destructor" << std::endl;
}

void	FragTrap::rangedAttack(std::string & target)
{
	std::cout << "FR4G-TP " << this->name 
				<< "attacks "
				<< ;
}
