/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:13:02 by bahn              #+#    #+#             */
/*   Updated: 2022/02/20 21:46:44 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "ABC.hpp"

Base * generate(void) {
	
	while (true) {
		switch (rand() % 3)
		{
		case 0:
			// return (new A<std::string>("A"));
			return (new A());
		case 1:
			// return (new B<std::string>("A"));
			return (new B());
		case 2:
			// return (new A<std::string>("A"));
			return (new C());
		default:
			continue ;
		}
	}
	return NULL;
}

void identify(Base* p) {
	// if (dynamic_cast<A<std::string>*>(p))
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	// if (dynamic_cast<B<std::string>*>(p))
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	// if (dynamic_cast<C<std::string>*>(p))
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	// if (dynamic_cast<A<std::string>*>(&p))
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	// if (dynamic_cast<B<std::string>*>(&p))
	if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	// if (dynamic_cast<C<std::string>*>(&p))
	if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main()
{
	std::srand((unsigned int)time(NULL));

	Base*	random = generate();

	identify(random);
	identify(*random);

	delete random;
	random = generate();
	identify(random);
	
	delete random;
	random = generate();
	identify(random);
	
	delete random;
	random = generate();
	identify(*random);

	delete random;
	random = generate();
	identify(*random);
	
	delete random;
	
	return 0;
}
