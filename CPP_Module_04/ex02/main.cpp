/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:20:46 by bahn              #+#    #+#             */
/*   Updated: 2022/02/12 14:42:52 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	const Dog*	j = new Dog();
	const Cat*	i = new Cat();

	std::cout << "I am " << j->getType() << "." << std::endl;
	std::cout << "I am " << i->getType() << "." << std::endl;

	i->makeSound();
	j->makeSound();
	
	std::srand((unsigned int)time(NULL));
	int	rand_num;
	
	rand_num = rand() % 100;
	i->getIdea(rand_num);
	
	rand_num = rand() % 100;
	j->getIdea(rand_num);

	delete i;
	delete j;
	return 0;
}
