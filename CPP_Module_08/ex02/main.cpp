/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:23:19 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 17:09:40 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Mutant Stack Size: " << mstack.size() << std::endl;
	std::cout << "Mutant Stack Top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Mutant Stack Size: " << mstack.size() << std::endl;
	std::cout << "Mutant Stack Top: " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(6);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();


	++it;
	--it;
	
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int>	s(mstack);
	
	std::cout << "Stack Size: " << mstack.size() << std::endl;
	std::cout << "Stack Top: " << mstack.top() << std::endl;

	return 0;
}