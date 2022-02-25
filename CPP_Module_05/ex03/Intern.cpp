/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:40:01 by bahn              #+#    #+#             */
/*   Updated: 2022/02/25 15:44:55 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form*	Intern::makeForm(std::string const & targetForm, std::string const & formName) {
	std::string	formList[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	size_t 		i;
	for (i = 0; i < 3; i++)
	{
		if (!targetForm.compare(formList[i]))
			break ;
	}
	
	try
	{
		switch (i)
		{
		case 0:
			return (new ShrubberyCreationForm(formName));
		case 1:
			return (new RobotomyRequestForm(formName));
		case 2:
			return (new PresidentialPardonForm(formName));
		default:
			throw NotMatchTheForm();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

Intern::NotMatchTheForm::NotMatchTheForm()
 : _error("Does not match the Form.")
{
}

Intern::NotMatchTheForm::~NotMatchTheForm() _NOEXCEPT {
	
}

const char*	Intern::NotMatchTheForm::what() const _NOEXCEPT {
	return (_error.c_str());
}
