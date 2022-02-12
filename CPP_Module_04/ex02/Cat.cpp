/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:26:03 by bahn              #+#    #+#             */
/*   Updated: 2022/02/12 14:41:57 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "[Cat] Deconstructor called" << std::endl;
	delete brain;
}

std::string	Cat::getType( void ) const {
	return (type);
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat : MEOW~ MEOW~" << std::endl;
}

void	Cat::getIdea(const int& index) const {
	std::cout << "Cat came up with is a ";
	std::cout << brain->comeToIdea(index) << std::endl;
}
