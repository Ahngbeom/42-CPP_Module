/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:50:19 by bahn              #+#    #+#             */
/*   Updated: 2022/01/27 01:21:27 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main(void)
{
	PhoneBook	phone_book;
	std::string command;

	welcome();
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "EXIT" || command == "exit")
			break ;
		else if (command == "ADD" || command == "add")
		{
			phone_book.add_Contacts();
		}
		else if (command == "SEARCH" || command == "search")
		{
			phone_book.search_Contacts();
		}
		// command.clear();
	}
	std::cout << "See you again ~ " << std::endl;
	return (0);
}