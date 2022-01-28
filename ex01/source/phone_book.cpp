/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:24:50 by bahn              #+#    #+#             */
/*   Updated: 2022/01/29 00:50:47 by bahn             ###   ########.fr       */
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

	if (capacity < MAX)
	{
		input.c_str();
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
		for (size_t i = 0; i < MAX - 1; i++)
		{
			contacts[i] = this->contacts[i + 1];
		}
		for (size_t i = Index; i <= DarkestSecret; i++)
		{
			std::cout << contacts[capacity - 1].display_input_field(i);
			std::getline(std::cin, input);
			contacts[capacity - 1].set_info(i, input);
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
