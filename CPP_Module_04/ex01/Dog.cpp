/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:26:03 by bahn              #+#    #+#             */
/*   Updated: 2022/02/11 22:13:09 by bahn             ###   ########.fr       */
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

void	Dog::makeSound( void ) const {
	std::cout << "WOOF! WOOF!" << std::endl;
}

void	Dog::getIdea(const int& index) const {
	std::cout << brain->comeToIdea(index) << std::endl;
}


Dog&	Dog::operator=(const Dog& dog) {
	if (this != &dog)
	{
		this->type = dog.getType();
		this->brain = dog.brain;
	}
	return (*this);
}
