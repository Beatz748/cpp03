
#include <fstream>
#include <fstream>
#include <fstream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "TESTING CREATION FRAGTRAPS" << std::endl;
	ScavTrap scav1("Evgeniy");
	ScavTrap scav2(scav1);
	ScavTrap scav3 = scav1;
	FragTrap frag4("f");
	FragTrap frag5("D");
	ClapTrap fraG1("Clp");
	ClapTrap fraG2(fraG1);
	ClapTrap fraG3("Clp3");
	ClapTrap fraG4 = fraG3;
	std::cout << "TESTING MELEEATTACK" << std::endl;
	scav1.meleeAttack("lol");
	scav2.meleeAttack("kek");
	scav3.meleeAttack("test");
	frag4.meleeAttack("42");
	frag5.meleeAttack("21");
	scav1.meleeAttack("lol");
	scav2.meleeAttack("lol");
	scav3.meleeAttack("lol");
	frag4.meleeAttack("lol");
	frag5.meleeAttack("lol");
	std::cout << "TESTING RANGEDATTACK" << std::endl;
	scav1.rangedAttack("lol");
	scav2.rangedAttack("kek");
	scav3.rangedAttack("test");
	frag4.rangedAttack("42");
	frag5.rangedAttack("21");
	scav1.rangedAttack("lol");
	scav2.rangedAttack("lol");
	scav3.rangedAttack("lol");
	frag4.rangedAttack("lol");
	frag5.rangedAttack("lol");
	std::cout << "TESTING TAKING DAMAGE" << std::endl;
	scav1.takeDamage(32);
	scav2.takeDamage(232323);
	scav3.takeDamage(23);
	frag4.takeDamage(1);
	frag5.takeDamage(32112212);
	scav1.takeDamage(100);
	scav2.takeDamage(5);
	scav3.takeDamage(0);
	frag4.takeDamage(321321);
	frag5.takeDamage(222);
	std::cout << "TESTING REPAIR" << std::endl;
	scav1.beRepaired(32);
	scav2.beRepaired(232323);
	scav3.beRepaired(23);
	frag4.beRepaired(1);
	frag5.beRepaired(32112212);
	scav1.beRepaired(100);
	scav2.beRepaired(5);
	scav3.beRepaired(0);
	frag4.beRepaired(321321);
	scav1.beRepaired(32);
	std::cout << "TESTING VAULTHUNTERDOT_EXE" << std::endl;
	frag4.vaulthunter_dot_exe("42");
	frag5.vaulthunter_dot_exe("21");
	std::cout << "TESTING challengeNewcomer" << std::endl;
	scav1.challengeNewcomer("Karina");
	scav2.challengeNewcomer("42");
	scav3.challengeNewcomer("hop-hop");
	std::cout << "TESTING CLAPTRAP" << std::endl;
	fraG1.beRepaired(90);
	fraG2.takeDamage(432523);
	fraG3.beRepaired(90);
	fraG4.takeDamage(432523);
	fraG1.beRepaired(90);
	fraG2.takeDamage(34);
	fraG3.beRepaired(432523);
	fraG4.takeDamage(34);
}
