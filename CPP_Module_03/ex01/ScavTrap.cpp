/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:13:58 by bahn              #+#    #+#             */
/*   Updated: 2022/02/10 16:09:55 by bahn             ###   ########.fr       */
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
	this->displayAttributes();
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Deconstructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap < " << name << " > have entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap < " << this->name << \
				" > attack < " << target << \
				" >, causing < " << this->attackDamage << " > points of damage!" \
				<< std::endl;
}
