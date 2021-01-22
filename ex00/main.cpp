#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "TESTING CREATION FRAGTRAPS" << std::endl;
	FragTrap frag1("Evgeniy");
	FragTrap frag2(frag1);
	FragTrap frag3 = frag1;
	FragTrap frag4("Dasha");
	FragTrap frag5("Katya");
	std::cout << "TESTING MELEEATTACK" << std::endl;
	frag1.meleeAttack("lol");
	frag2.meleeAttack("kek");
	frag3.meleeAttack("test");
	frag4.meleeAttack("42");
	frag5.meleeAttack("21");
	frag1.meleeAttack("lol");
	frag2.meleeAttack("lol");
	frag3.meleeAttack("lol");
	frag4.meleeAttack("lol");
	frag5.meleeAttack("lol");
	std::cout << "TESTING RANGEDATTACK" << std::endl;
	frag1.rangedAttack("lol");
	frag2.rangedAttack("kek");
	frag3.rangedAttack("test");
	frag4.rangedAttack("42");
	frag5.rangedAttack("21");
	frag1.rangedAttack("lol");
	frag2.rangedAttack("lol");
	frag3.rangedAttack("lol");
	frag4.rangedAttack("lol");
	frag5.rangedAttack("lol");
	std::cout << "TESTING TAKING DAMAGE" << std::endl;
	frag1.takeDamage(32);
	frag2.takeDamage(232323);
	frag3.takeDamage(23);
	frag4.takeDamage(1);
	frag5.takeDamage(32112212);
	frag1.takeDamage(100);
	frag2.takeDamage(5);
	frag3.takeDamage(0);
	frag4.takeDamage(321321);
	frag5.takeDamage(222);
	std::cout << "TESTING REPAIR" << std::endl;
	frag1.beRepaired(32);
	frag2.beRepaired(232323);
	frag3.beRepaired(23);
	frag4.beRepaired(1);
	frag5.beRepaired(32112212);
	frag1.beRepaired(100);
	frag2.beRepaired(5);
	frag3.beRepaired(0);
	frag4.beRepaired(321321);
	frag1.beRepaired(32);
	std::cout << "TEddSTING VAULTHUNTERDOT_EXE" << std::endl;
	frag1.vaulthunter_dot_exe("lol");
	frag2.vaulthunter_dot_exe("kek");
	frag3.vaulthunter_dot_exe("test");
	frag4.vaulthunter_dot_exe("42");
	frag5.vaulthunter_dot_exe("21");
	frag1.vaulthunter_dot_exe("lol");
	frag2.vaulthunter_dot_exe("lol");
	frag3.vaulthunter_dot_exe("lol");
}
