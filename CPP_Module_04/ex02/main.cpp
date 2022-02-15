/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:20:46 by bahn              #+#    #+#             */
/*   Updated: 2022/02/15 12:05:55 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Dog*	j = new Dog();
	const Cat*	i = new Cat();

	std::cout << std::endl;

	std::srand((unsigned int)time(NULL));
	j->makeSound();
	i->makeSound();
	
	std::cout << std::endl;
	
	delete j;
	delete i;
	return 0;
}
