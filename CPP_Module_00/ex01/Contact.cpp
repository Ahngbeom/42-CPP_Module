/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:49:28 by bahn              #+#    #+#             */
/*   Updated: 2022/02/03 01:35:44 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::field[6] = {
	"Index",
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

std::string	Contact::display_input_field(std::size_t index) {
	return (field[index] + " : ");
}

void		Contact::display_field()
{
	display_borderLine();
	std::cout << "|";
	for (size_t i = Index; i <= Nickname; i++)
	{
		std::cout << std::setw(DISPLAY_MAX_WIDTH) << std::left << field[i];
		std::cout << "|";
	}
	std::cout << std::endl;
	display_borderLine();
}

void		Contact::display_borderLine()
{
	std::cout << std::setw((DISPLAY_MAX_WIDTH + 1) * (Nickname + 1) + 1) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ');
}

void	Contact::set_info(size_t index, std::string info)
{
	informations[index] = info;
}

void	Contact::get_info() {
	for (size_t i = Index; i <= Nickname; i++)
	{
		if (informations[i].size() >= DISPLAY_MAX_WIDTH)
			std::cout << "|" << std::left << std::setw(DISPLAY_MAX_WIDTH) << informations[i].substr(0, 10).replace(10, 1, ".");
		else
			std::cout << "|" << std::left << std::setw(DISPLAY_MAX_WIDTH) << informations[i];
		if (i == Nickname)
			std::cout << "|" << std::endl;
	}
	display_borderLine();
}

std::string	Contact::get_info(std::size_t index) {
	return (informations[index]);
}

std::size_t	Contact::get_index() {
	return (std::stoi(informations[Index]));
}