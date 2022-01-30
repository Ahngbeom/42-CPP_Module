/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:05:00 by bahn              #+#    #+#             */
/*   Updated: 2022/01/31 00:10:03 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie( std::string name ) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << "<" << _name << ">";
	std::cout << " is disappeared." << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "<" << _name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}