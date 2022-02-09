/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:58:59 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 23:12:55 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : \
	ClapTrap(name + "_clap_name"), ScavTrap(ClapTrap::name), FragTrap(ClapTrap::name), name(name)
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	this->displayAttributes();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Deconstructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap Name : " << this->name << std::endl;
	std::cout << "ClapTrap Name : " << ClapTrap::name << std::endl;
}
