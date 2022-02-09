/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:33 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 18:52:30 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap	clap("CLAP");
	ScavTrap	scav("SCAV");
	FragTrap	frag("FRAG");

	std::cout << "========================= FIGHT ============================" << std::endl;

	scav.attack("CLAP");
	clap.takeDamage(scav.getAttackDamage());
	
	frag.highFivesGuys();

	scav.attack("FRAG");
	frag.takeDamage(scav.getAttackDamage());

	frag.attack("SCAV");
	scav.takeDamage(frag.getAttackDamage());

	scav.guardGate();
	std::cout << "========================== END =============================" << std::endl;

	clap.displayAttributes();
	scav.displayAttributes();
	frag.displayAttributes();
	return 0;
}
