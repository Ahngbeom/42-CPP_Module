/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:18:55 by bahn              #+#    #+#             */
/*   Updated: 2022/02/18 14:28:26 by bahn             ###   ########.fr       */
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
	~PresidentialPardonForm();

	virtual void	execute(Bureaucrat const & executer);
};

#endif