/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:05:39 by bahn              #+#    #+#             */
/*   Updated: 2022/02/28 15:37:51 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
 :	Form(target, 145, 137)
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form)
 : Form(form.getName(), form.getSignGrade(), form.getExecuteGrade()) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
	return (*dynamic_cast<ShrubberyCreationForm*>(&Form::operator=(form)));
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executer) {
	if (executer.getGrade() < 1)
		throw GradeTooHighException("a grade required for executing is too high.");
	else if (executer.getGrade() > getExecuteGrade())
		throw GradeTooLowException("a grade required for executing is too low.");
	else {
		std::ofstream	oFile;
		std::string		fName(getName().append("_shrubbery"));
		std::string		line;
		
		oFile.open(fName.c_str(), std::fstream::out | std::fstream::trunc);
		oFile << TREES;
		oFile.close();
		std::ifstream	iFile(fName.c_str());
		do
		{
			std::getline(iFile, line);
			std::cout << line << std::endl;
		} while (!iFile.eof());
		iFile.close();
	}
}