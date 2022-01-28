/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:24:50 by bahn              #+#    #+#             */
/*   Updated: 2022/01/29 01:45:31 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : capacity() {
	
}

PhoneBook::~PhoneBook() {
	// Delete PhoneBook ?
	std::cout << "PhoneBook Destructing" << std::endl;
}

void	PhoneBook::add_Contacts(void)
{
	std::string	input;
	std::size_t	i;

	if (capacity < MAX)
	{
		contacts[capacity].set_info(Index, std::to_string(capacity + 1));
		for (size_t i = FirstName; i <= DarkestSecret; i++)
		{
			std::cout << contacts[capacity].display_input_field(i);
			std::getline(std::cin, input);
			contacts[capacity].set_info(i, input);
		}
		capacity++;
	}
	else
	{
		contacts[0].~Contacts();
		for (i = 0; i < MAX - 1; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		contacts[i].set_info(Index, std::to_string(get_nextIndex()));
		for (size_t j = FirstName; j <= DarkestSecret; j++)
		{
			std::cout << contacts[i].display_input_field(j);
			std::getline(std::cin, input);
			contacts[i].set_info(j, input);
		}
	}
}

void	PhoneBook::search_Contacts(void)
{
	contacts[capacity].display_field();
	for (size_t i = 0; i < capacity; i++)
	{
		contacts[i].get_info();
	}
}

std::size_t	PhoneBook::get_nextIndex() {
	return (contacts[MAX - 1].get_index() + 1);
}