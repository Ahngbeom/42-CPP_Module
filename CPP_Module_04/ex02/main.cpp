/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:20:46 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 22:27:10 by bahn             ###   ########.fr       */
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

	j->makeSound();
	i->makeSound();
	
	delete j;
	delete i;
	return 0;
}
