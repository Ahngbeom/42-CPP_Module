/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:50:19 by bahn              #+#    #+#             */
/*   Updated: 2022/01/28 22:21:15 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	pb;
	std::string command;

	welcome();
	while (1)
	{
		// std::cout << "Available Commands : ADD, SEARCH, EXIT\n";
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "EXIT" || command == "exit")
			break ;
		else if (command == "ADD" || command == "add")
			pb.add_Contacts();
		else if (command == "SEARCH" || command == "search")
			pb.search_Contacts();
		else
			std::cout << "WARNING : Invalid Commands." << std::endl;
	}
	std::cout << "See you again ~ " << std::endl;
	return (0);
}