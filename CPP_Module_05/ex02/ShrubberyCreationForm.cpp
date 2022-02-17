/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:05:39 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 02:50:42 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
 :	Form(target, 145, 137)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executer) {
	try
	{
		beExecuted(*(const_cast<Bureaucrat*>(&executer)));
		
		std::ofstream	oFile;
		std::string		line;
		
		oFile.open(getName().append("_Shrubbery").c_str(), std::fstream::out | std::fstream::trunc);
		oFile << "		  ,@@@@@@@,\n \
	  ,,,.   ,@@@@@@/@@,  .oo8888o.\n \
      ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n \
     ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n \
     %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n \
     %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n \
     `&%\\ ` /%&'    |.|        \\ '|8'\n \
         |o|        | |         | |\n \
         |.|        | |         | |\n \
	\\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\n";
		oFile.close();
		std::ifstream	iFile(getName().append("_Shrubbery").c_str());
		do
		{
			std::getline(iFile, line);
			std::cout << line << std::endl;
		} while (!iFile.eof());
		iFile.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}