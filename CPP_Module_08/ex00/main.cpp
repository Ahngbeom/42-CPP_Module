/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:23:19 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 14:22:46 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	std::cout << "Begin: " << *(vec.begin()) << std::endl;
	std::cout << "End: " << *(vec.end() - 1) << std::endl;

	{
		std::vector<int>::iterator found = ::easyfind(vec, 7);
		if(found == vec.end())
			std::cout << "Not found elements." << std::endl;
		else {
			std::cout << "Elements found: " << *found << std::endl;
		}
	}
	
	{
		std::vector<int>::iterator found = ::easyfind(vec, 99);
		if(found == vec.end())
			std::cout << "Not found elements." << std::endl;
		else {
			std::cout << "Elements found: " << *found << std::endl;
		}
	}

	return 0;
}
