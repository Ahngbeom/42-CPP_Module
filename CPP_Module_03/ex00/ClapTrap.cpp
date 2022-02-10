/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:43 by bahn              #+#    #+#             */
/*   Updated: 2022/02/10 15:30:12 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) \
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap < " << this->name << \
				" > attack < " << target << \
				" >, causing < " << this->attackDamage << " > points of damage!" \
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "ClapTrap < " << this->name << \
				" > take a damage < " << amount << " > !" \
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap < " << this->name << \
				" > be repaired < " << amount << " > !" \
				<< std::endl;
}