/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:24:14 by bahn              #+#    #+#             */
/*   Updated: 2022/02/15 11:33:13 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "[Animal] Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Deconstructor called" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (type);
}
