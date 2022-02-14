/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:28:17 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 17:16:57 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat aaron("Aaron", 0);
	Bureaucrat emile("Emile", 1);
	Bureaucrat bukayo("Bukayo", 2);
	Bureaucrat ben("Ben", 100);
	Bureaucrat granit("Granit", 199);

	std::cout << std::endl;
	std::cout << "[Bureaucrat Grade]" << std::endl;
	std::cout << aaron;
	std::cout << emile;
	std::cout << bukayo;
	std::cout << ben;
	std::cout << granit;

	std::cout << std::endl;
	aaron.decrementTheGrade(1);
	emile.incrementTheGrade(10);
	bukayo.decrementTheGrade(100);
	ben.incrementTheGrade(99);
	granit.incrementTheGrade(granit.getGrade() % 150);
	
	std::cout << std::endl;
	std::cout << "[Bureaucrat Grade]" << std::endl;
	std::cout << aaron;
	std::cout << emile;
	std::cout << bukayo;
	std::cout << ben;
	std::cout << granit;
	
	std::cout << std::endl;
	return 0;
}
