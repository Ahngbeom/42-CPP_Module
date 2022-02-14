/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:28:23 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 16:41:49 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
private:
	const	std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string	getName();
	int			getGrade();

	void	incrementTheGrade(std::size_t amount);
	void	decrementTheGrade(std::size_t amount);

	class GradeTooHighException : public std::exception {
		private:
			std::string	_error;
		public:
			GradeTooHighException(std::string error);
			~GradeTooHighException() _GLIBCXX_NOTHROW;
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
		private:
			std::string	_error;
		public:
			GradeTooLowException(std::string error);
			~GradeTooLowException() _GLIBCXX_NOTHROW;
			virtual const char* what() const throw();
	};
	
};

std::ostream&	operator<<(std::ostream& ostrm, Bureaucrat& bureau);

#endif