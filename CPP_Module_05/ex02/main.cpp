/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:28:17 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 01:49:41 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form*	home = new ShrubberyCreationForm("home");
	
	Bureaucrat aaron("Aaron", 1);
	// Bureaucrat emile("Emile", 100);
	// Bureaucrat bukayo("Bukayo", 150);

	aaron.executeForm(*home);

	// aaron.signForm(home);
	// emile.signForm(home);
	// bukayo.signForm(home);
	
	// std::cout << std::endl;

	// aaron.incrementTheGrade(1);
	// emile.decrementTheGrade(1);
	// bukayo.incrementTheGrade(100);

	// aaron.signForm(home);
	// emile.signForm(home);
	// bukayo.signForm(home);

	return 0;
}
 