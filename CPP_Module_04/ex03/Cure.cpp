/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:24:17 by bahn              #+#    #+#             */
/*   Updated: 2022/02/13 02:48:55 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Deconstructor called" << std::endl;
}

AMateria* Cure::clone() const {
	// Default Copy Constructor. 
	// But A new instance is created by dynamically allocating it using the 'new' keyword.
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName();
	std::cout << "\'s wounds *" << std::endl;
}