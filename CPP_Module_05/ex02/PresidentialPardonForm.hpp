/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:18:55 by bahn              #+#    #+#             */
/*   Updated: 2022/02/28 18:43:59 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

# include "Form.hpp"
# include "ASCII_ART.hpp"

class PresidentialPardonForm : public Form
{
private:
	
public:
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(const PresidentialPardonForm& form);
	~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& form);

	virtual void	execute(Bureaucrat const & executer) const ;
};

#endif