/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:49:28 by bahn              #+#    #+#             */
/*   Updated: 2022/01/29 01:11:02 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts() {}

Contacts::~Contacts() {}

std::string	Contacts::field[6] = {
	"Index",
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Numb",
	"Darkest Sec"
};

std::string	Contacts::display_input_field(std::size_t index) {
	return (field[index] + " : ");
}

void		Contacts::display_field()
{
	display_borderLine();
	for (size_t i = Index; i <= Nickname; i++)
	{
		std::cout << "|" \
		<< field[i] << std::setw(DISPLAY_MAX_WIDTH - field[i].size() + 1);
	}
	std::cout << "|" << std::endl;
	display_borderLine();
}

void		Contacts::display_borderLine()
{
	std::cout << std::setw((DISPLAY_MAX_WIDTH + 1) * (Nickname + 1) + 2) << std::setfill('-') << " " << std::endl;
	std::cout << std::setfill(' ');
}

void	Contacts::set_info(size_t index, std::string info)
{
	informations[index] = info;
}

void	Contacts::get_info() {
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