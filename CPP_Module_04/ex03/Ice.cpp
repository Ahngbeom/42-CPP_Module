/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:20:04 by bahn              #+#    #+#             */
/*   Updated: 2022/02/13 00:24:58 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Deonstructor called" << std::endl;
}

AMateria* Ice::clone() const {
	// Default Copy Constructor. 
	// But A new instance is created by dynamically allocating it using the 'new' keyword.
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}