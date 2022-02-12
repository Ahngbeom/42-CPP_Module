/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:30:52 by bahn              #+#    #+#             */
/*   Updated: 2022/02/13 03:00:52 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* mater) {
	size_t	i = 0;

	while (srcs[i] != NULL)
		i++;
	if (i < 4)
		srcs[i] = mater->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type.compare("ice") == 0)
		return (new Ice());
	else if (type.compare("cure") == 0)
		return (new Cure());
	else
		return (NULL);
}
