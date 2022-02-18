/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:28:17 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 15:03:44 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form*	home = new ShrubberyCreationForm("Home");
	Form*	car = new RobotomyRequestForm("Car");
	Form*	Bane = new PresidentialPardonForm("Bane");
	
	Bureaucrat bahn("bahn", 140);
	
	std::cout << "======================================================================================" << std::endl;
	
	{
		std::cout << "TEST #1 (Executer Grade : " << bahn.getGrade() << ")" << std::endl;
		std::cout << "1 : \n"; bahn.executeForm(*home);
		std::cout << "2 : \n"; bahn.executeForm(*car);
		std::cout << "3 : \n"; bahn.executeForm(*Bane);
		std::cout << "======================================================================================" << std::endl;
	}

	bahn.incrementTheGrade(50);

	{
		std::cout << "TEST #2 (Executer Grade : " << bahn.getGrade() << ")" << std::endl;
		std::cout << "1 : \n"; bahn.executeForm(*home);
		std::cout << "2 : \n"; bahn.executeForm(*car);
		std::cout << "3 : \n"; bahn.executeForm(*Bane);
		std::cout << "======================================================================================" << std::endl;
	}

	bahn.incrementTheGrade(50);

	{
		std::cout << "TEST #3 (Executer Grade : " << bahn.getGrade() << ")" << std::endl;
		std::cout << "1 : \n"; bahn.executeForm(*home);
		std::cout << "2 : \n"; bahn.executeForm(*car);
		std::cout << "3 : \n"; bahn.executeForm(*Bane);
		std::cout << "======================================================================================" << std::endl;
	}

	bahn.incrementTheGrade(35);

	{
		std::cout << "TEST #4 (Executer Grade : " << bahn.getGrade() << ")" << std::endl;
		std::cout << "1 : \n"; bahn.executeForm(*home);
		std::cout << "2 : \n"; bahn.executeForm(*car);
		std::cout << "3 : \n"; bahn.executeForm(*Bane);
		std::cout << "======================================================================================" << std::endl;
	}
	
	delete home;
	delete car;
	delete Bane;

	return 0;
}
 