/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:43:48 by jecaudal          #+#    #+#             */
/*   Updated: 2020/11/17 17:29:43 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"

#define SEPARATOR_FRAGTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## FragTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_SCAVTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## ScavTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_NINJATRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## NinjaTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

#define SEPARATOR_SUPERTRAP	\
	"/**************************************************************************/\n"	\
	"/**                    ## SuperTrap TEST ##                               **/\n"	\
	"/**************************************************************************/\n"

void	fragtrap_demo(void)
{
	FragTrap michel;
	FragTrap nicolas("nicolas");

	std::cout << michel << std::endl;
	michel.setName("michel");
	std::cout << michel << std::endl;
	std::cout << nicolas << std::endl;

	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	if (michel.vaulthunter_dot_exe("nicolas") == 0)
		nicolas.takeDamage(25);
	std::cout << "Michel a " << michel.getEnergyPoints() << " points d'energie." << std::endl;
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl << std::endl;
	michel.beRepaired(25);
	std::cout << "Michel a " << michel.getEnergyPoints() << " points d'energie." << std::endl;
	nicolas.beRepaired(45);
	std::cout << "Nicolas est a " << nicolas.getHitPoints() << "HP" << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(FT_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(FT_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(FT_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(FT_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	nicolas.meleeAttack("michel");
	michel.takeDamage(FT_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl << std::endl;
	michel.beRepaired(40);
	nicolas.rangedAttack("michel");
	michel.takeDamage(FT_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Michel a " << michel.getHitPoints() << " HP." << std::endl;
	std::cout << michel << std::endl;
	FragTrap	cpy1_nicolas(nicolas);
	FragTrap	cpy2_nicolas;
	cpy2_nicolas = nicolas;
	std::cout << nicolas << std::endl;
	std::cout << cpy1_nicolas << std::endl;
	std::cout << cpy2_nicolas << std::endl;
}

void	scavtrap_demo(void)
{
	ScavTrap	jean_mich;
	ScavTrap	sebastien("sebastien");

	std::cout << jean_mich << std::endl;
	std::cout << sebastien << std::endl;
	jean_mich.setName("jean_mich");
	jean_mich.meleeAttack("sebastien");
	sebastien.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	sebastien.meleeAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_MELEE_ATTACK_DAMAGE);
	std::cout << "jean_mich a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	jean_mich.rangedAttack("sebastien");
	sebastien.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	sebastien.rangedAttack("jean-mich");
	jean_mich.takeDamage(SC_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "Jean_mich a " << sebastien.getHitPoints() << " HP." << std::endl << std::endl;
	sebastien.beRepaired(24);
	std::cout << "Sebastien a " << sebastien.getHitPoints() << " HP." << std::endl;
	jean_mich.beRepaired(16);
	std::cout << "Jean-mich a " << jean_mich.getHitPoints() << " HP." << std::endl;
	jean_mich.challengeNewcomer("sebastien");
	jean_mich.challengeNewcomer("sebastien");
	jean_mich.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	sebastien.challengeNewcomer("sebastien");
	sebastien.beRepaired(100);
	sebastien.challengeNewcomer("sebastien");
	std::cout << jean_mich << std::endl;
	ScavTrap	cpy1_sebastien(sebastien);
	ScavTrap	cpy2_sebastien;
	cpy2_sebastien = sebastien;
	std::cout << sebastien << std::endl;
	std::cout << cpy1_sebastien << std::endl;
	std::cout << cpy2_sebastien << std::endl;
}

void	ninjatrap_demo(void)
{
	ScavTrap	boris("boris");
	FragTrap	monique("monique");
	NinjaTrap	victoire;
	NinjaTrap	copy_victoire;
	NinjaTrap	alfred("alfred");

	victoire.setName("Victoire");
	victoire.ninjaShoebox(boris);
	victoire.ninjaShoebox(monique);
	victoire.beRepaired(100);
	victoire.ninjaShoebox(alfred);
	alfred.meleeAttack("victoire");
	victoire.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	alfred.rangedAttack("victoire");
	victoire.takeDamage(NT_CONST_RANGED_ATTACK_DAMAGE);
	NinjaTrap	copy_alfred(alfred);
	std::cout << alfred << std::endl;
	std::cout << copy_alfred << std::endl;
	copy_victoire = NinjaTrap(victoire);
	std::cout << victoire << std::endl;
	std::cout << copy_victoire << std::endl;
	return ;
}

void	supertrap_demo()
{
	SuperTrap	boris;
	SuperTrap	copy_boris;
	SuperTrap	gaston("gaston");
	ScavTrap	leo("leo");
	FragTrap	lea("lea");
	NinjaTrap	zoe("zoe");

	// INIT
	boris.setName("boris");
	std::cout << boris << std::endl;

	// COMMON ATTACK
	gaston.meleeAttack("boris");
	boris.takeDamage(SP_CONST_MELEE_ATTACK_DAMAGE);
	gaston.rangedAttack("boris");
	boris.takeDamage(SP_CONST_RANGED_ATTACK_DAMAGE);
	std::cout << "boris HP = " << boris.getHitPoints() << std::endl;

	// SPECIAL ATTACK FRAG
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);
	gaston.beRepaired(5);
	if (gaston.vaulthunter_dot_exe("boris") == 0)
		boris.takeDamage(NT_CONST_MELEE_ATTACK_DAMAGE);

	// SPECIAL ATTACK FRAG
	boris.ninjaShoebox(leo);
	boris.ninjaShoebox(zoe);
	boris.ninjaShoebox(lea);
	boris.ninjaShoebox(lea);

	// RESUME FINAL
	copy_boris = SuperTrap(boris);
	copy_boris.setName("copy_boris");
	std::cout << boris << std::endl;
	std::cout << copy_boris << std::endl;
	std::cout << gaston << std::endl;
	return ;
}

int		main()
{
	int  choise;

	std::cout << "Quel XTrap veux-tu tester ?" << std::endl;
	std::cout << "    [1] : ScavTrap" << std::endl;
	std::cout << "    [2] : FragTrap" << std::endl;
	std::cout << "    [3] : NinjaTrap" << std::endl;
	std::cout << "    [4] : SuperTrap" << std::endl;
	std::cout << "    [5] : TOUS" << std::endl;
	std::cout << "> ";
	std::cin >> choise;

	switch(choise)
	{
		case 1:
			scavtrap_demo();
			break ;
		case 2:
			fragtrap_demo();
			break ;
		case 3:
			ninjatrap_demo();
			break ;
		case 4:
			supertrap_demo();
			break ;
		case 5:
			std::cout << SEPARATOR_FRAGTRAP << std::endl;
			fragtrap_demo();
			std::cout << SEPARATOR_SCAVTRAP << std::endl;
			scavtrap_demo();
			std::cout << SEPARATOR_NINJATRAP << std::endl;
			ninjatrap_demo();
			std::cout << SEPARATOR_SUPERTRAP << std::endl;
			supertrap_demo();
			break ;
	}
	return (0);
}
