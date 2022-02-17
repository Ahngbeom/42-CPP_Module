/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:28:23 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 01:45:14 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const	std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string	getName() const ;
	int			getGrade() const ;

	void	signForm(Form& form) const ;
	void	executeForm(Form const & form) const ;
	
	void	incrementTheGrade(std::size_t amount);
	void	decrementTheGrade(std::size_t amount);
};

std::ostream&	operator<<(std::ostream& ostrm, Bureaucrat& bureau);

#endif