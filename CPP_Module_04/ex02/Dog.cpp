/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:26:03 by bahn              #+#    #+#             */
/*   Updated: 2022/02/12 14:41:53 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "[Dog] Deconstructor called" << std::endl;
	delete brain;
}

std::string	Dog::getType( void ) const {
	return (type);
}

void	Dog::makeSound( void ) const {
	std::cout << "Dog : WOOF! WOOF!" << std::endl;
}

void	Dog::getIdea(const int& index) const {
	std::cout << "Dog came up with is a ";
	std::cout << brain->comeToIdea(index) << std::endl;
}
