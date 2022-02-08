/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:13:58 by bahn              #+#    #+#             */
/*   Updated: 2022/02/08 21:57:38 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Deconstructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "<" << name << "> have entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "ClapTrap <" << this->name << \
				"> attack <" << target << \
				">, causing <" << this->attackDamage << "> points of damage!" \
				<< std::endl;
	this->hitPoints--;
}
