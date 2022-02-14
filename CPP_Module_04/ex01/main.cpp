/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:20:46 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 22:07:06 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal*	animals[100];
	
	for (size_t i = 0; i < 100; i++)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (size_t i = 0; i < 100; i++)
	{
		std::cout << animals[i]->getType() + " : ";
		animals[i]->makeSound();
		animals[i]->getIdea(i);
	}
	
	for (size_t i = 0; i < 100; i++)
	{
		delete animals[i];
	}
	return 0;
}
