/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:26:03 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 21:47:58 by bahn             ###   ########.fr       */
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

void	Cat::makeSound( void ) const {
	std::cout << "MEOW~ MEOW~";
}

void	Cat::getIdea(const int& index) const {
	std::cout << "(" + brain->comeToIdea(index) + ")" << std::endl;
}
