/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:05:43 by bahn              #+#    #+#             */
/*   Updated: 2022/02/13 00:29:19 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "AMateria Name Constructor called" << std::endl;
}

AMateria::AMateria() {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Deconstructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return (type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}