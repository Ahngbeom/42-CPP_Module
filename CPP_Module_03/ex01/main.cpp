/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:33 by bahn              #+#    #+#             */
/*   Updated: 2022/02/10 16:01:40 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap	clap("CLAP");
	ScavTrap	scav("SCAV");

	clap.attack("SCAV");
	scav.takeDamage(0);
	scav.guardGate();
	scav.attack("CLAP");
	scav.ClapTrap::attack("CLAP");
	clap.takeDamage(20);
	clap.beRepaired(10);
	// clap.guardGate();

	clap.displayAttributes();
	scav.displayAttributes();
	return 0;
}
