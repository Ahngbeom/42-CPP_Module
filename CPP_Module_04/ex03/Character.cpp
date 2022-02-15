/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:09:39 by bahn              #+#    #+#             */
/*   Updated: 2022/02/15 20:51:06 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{
	// std::cout << "Character Constructor called" << std::endl;
	for (size_t i = 0; i < sizeof(inven) / sizeof(AMateria*); i++)
	{
		inven[i] = NULL;
	}
}

Character::~Character()
{
	// std::cout << "Character Deconstructor called" << std::endl;
	for (size_t i = 0; i < sizeof(inven) / sizeof(AMateria*); i++)
	{
		delete inven[i];
	}
}

std::string const & Character::getName() const {
	return (name);
}

void Character::equip(AMateria* m) {
	size_t	i = 0;

	while (inven[i] != NULL)
		i++;
	if (i < sizeof(inven) / sizeof(AMateria*))
		inven[i] = m;
}

void Character::unequip(int idx) {
	(void)idx;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= (int)(sizeof(inven) / sizeof(AMateria*)))
		return ;
	AMateria* mater = this->inven[idx];
	
	if (mater)
	{
		mater->use(target);
	}
}

