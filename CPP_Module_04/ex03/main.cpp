/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:12:46 by bahn              #+#    #+#             */
/*   Updated: 2022/02/13 15:07:43 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* bahn = new Character("bahn");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		bahn->equip(tmp);
		tmp = src->createMateria("cure");
		bahn->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		bahn->use(0, *bob);
		bahn->use(1, *bob);
		
		delete bob;
		delete bahn;
		delete src;
	}

	return 0;
}
