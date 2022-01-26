/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:24:50 by bahn              #+#    #+#             */
/*   Updated: 2022/01/27 01:01:26 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

void	PhoneBook::add_Contacts(void)
{
	if (this->index < MAX)
	{
		this->member[this->index].set_Contacts();
		this->index++;
	}
	else
	{
		std::cout << "FULL !\n";
	}
}

void	PhoneBook::search_Contacts(void)
{
	int	index;

	index = -1;
	while (++index < this->index)
	{
		this->member[index].get_Contacts();
	}
}
