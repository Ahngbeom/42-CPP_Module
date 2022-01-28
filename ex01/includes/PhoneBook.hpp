/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:25:20 by bahn              #+#    #+#             */
/*   Updated: 2022/01/29 00:58:58 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

# define MAX		8

class	PhoneBook
{
private:
	Contacts		contacts[MAX];
	std::size_t		capacity;

public:
	PhoneBook();
	~PhoneBook();
	void	add_Contacts(void);
	void	search_Contacts(void);
};

void	welcome(void);

#endif