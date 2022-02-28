/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:10:13 by bahn              #+#    #+#             */
/*   Updated: 2022/02/28 15:36:23 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
 : Form(target, 72, 45)
{
	std::srand((unsigned int)time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form)
 : Form(form.getName(), form.getSignGrade(), form.getExecuteGrade()) 
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form) {
	return (*dynamic_cast<RobotomyRequestForm*>(&Form::operator=(form)));
}

void	RobotomyRequestForm::execute(Bureaucrat const & executer) {
	if (executer.getGrade() < 1)
		throw GradeTooHighException("a grade required for executing is too high.");
	else if (executer.getGrade() > getExecuteGrade())
		throw GradeTooLowException("a grade required for executing is too low.");
	else {
		if (rand() % 100 >= 50) {
			std::cout << DRILL;
			std::cout << *this << " has been robotomized successfully" << " 50% of the time" << std::endl;
		}
		else
			std::cout << *this << " has been robotomized unsuccessfully" << " 50% of the time" << std::endl;
	}
}
