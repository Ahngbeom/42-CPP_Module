/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:49:28 by bahn              #+#    #+#             */
/*   Updated: 2022/01/27 01:10:46 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	Contacts::set_Contacts(void)
{
	std::string	input;

	std::cout << "First Name : ";
	std::cin >> input;
	this->first_name = (char *)input.c_str();
	input.empty();

	std::cout << "Last Name : ";
	std::cin >> input;
	this->last_name = (char *)input.c_str();
	input.empty();

	std::cout << "Nickname : ";
	std::cin >> input;
	this->nickname = (char *)input.c_str();
	input.empty();

	std::cout << "Phone Number : ";
	std::cin >> input;
	this->phone_number = (char *)input.c_str();
	input.empty();

	std::cout << "Darkest Secret : ";
	std::cin >> input;
	this->darkest_secret = (char *)input.c_str();
	input.empty();
}

void	Contacts::get_Contacts(void)
{
	std::stringstream ss;
	
	ss << this->first_name;
	std::cout << ss.str() << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
