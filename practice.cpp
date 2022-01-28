/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:08:08 by bahn              #+#    #+#             */
/*   Updated: 2022/01/28 22:14:07 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contacts
{
private:
	static	std::string	field[6];
	std::string			informations[6];
public:
	Contacts();
	~Contacts();
	std::string	display_input_field(std::size_t index);
	void		set_info(std::size_t index, std::string info);
	std::string	get_info();
};

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

std::string	Contacts::field[6] = {
	"Index",
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

std::string	Contacts::display_input_field(std::size_t index) {
	return (field[index] + " : ");
}

void	Contacts::set_info(size_t index, std::string info) {
	informations[index] = info;
}

std::string	Contacts::get_info() {
	std::string	output;

	for (size_t i = 0; i < 6; i++)
	{
		output += informations[i] + "\n";
	}
	return (output);
}

class PhoneBook
{
private:
	Contacts	contacts[6];
	std::size_t	capacity;
	
	enum	field_index {
		Index,
		FirstName,
		LastName,
		Nickname,
		PhoneNumber,
		DarkestSecret
	};

public:
	PhoneBook();
	~PhoneBook();
	void		set_contacts();
	void		get_contacts();
};

PhoneBook::PhoneBook() : capacity()
{
	std::cout << "Constructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor" << std::endl;
}

void	PhoneBook::set_contacts() {
	std::string	input;

	for (size_t i = Index; i <= DarkestSecret; i++)
	{
		std::cout << contacts[capacity].display_input_field(i);
		std::getline(std::cin, input);
		contacts[capacity].set_info(i, input);
	}
	capacity++;
}

void	PhoneBook::get_contacts() {
	for (size_t i = 0; i < capacity; i++)
	{
		std::cout << contacts[i].get_info() << std::endl;
	}
}

int main()
{
	PhoneBook pb;
	
	pb.set_contacts();
	pb.get_contacts();
	return 0;
}
