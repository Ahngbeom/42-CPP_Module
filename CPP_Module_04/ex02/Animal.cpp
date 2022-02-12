/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:24:14 by bahn              #+#    #+#             */
/*   Updated: 2022/02/12 14:48:36 by bahn             ###   ########.fr       */
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
