/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:30:47 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 01:20:10 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : \
	_name(name), _grade(grade)
{
	if (_grade < 1) {
		throw Form::GradeTooHighException("Grade too high.");
	}
	else if (_grade > 150) {
		throw Form::GradeTooHighException("Grade too low.");
	}
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::signForm(Form& form) {
	std::cout << *this;
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << " cannot sign " << form << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << " signs " << form << std::endl;
}

void	Bureaucrat::incrementTheGrade(std::size_t amount) {
	_grade -= amount;
}
	
void	Bureaucrat::decrementTheGrade(std::size_t amount) {
	_grade += amount;
}

std::ostream&	operator<<(std::ostream& ostrm, Bureaucrat& bureau) {
	ostrm << "<" + bureau.getName() + ">";
	return (ostrm);
}
