/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:29:37 by bahn              #+#    #+#             */
/*   Updated: 2022/02/10 17:05:30 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "[FragTrap] Name constructor called" << std::endl;
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	this->displayAttributes();
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Deconstructor called" << std::endl;
}

void	FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap < " << this->name << \
				" > attack < " << target << \
				" >, causing < " << this->attackDamage << " > points of damage!" \
				<< std::endl;
}

void 	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap < " << this->name << \
				" > Shall we high Fives Guys ~ ?" << \
				std::endl;
}

