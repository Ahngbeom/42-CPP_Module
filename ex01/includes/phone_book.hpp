/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:25:20 by bahn              #+#    #+#             */
/*   Updated: 2022/01/27 01:07:21 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

# include <iostream>
# include <string>
# include <sstream>

# define MAX	8

class	Contacts
{
	private:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;
	
	public:
		void	set_Contacts(void);
		void	get_Contacts(void);
};

class	PhoneBook
{
	private:
		Contacts	member[MAX];
		int		index;

	public:
		PhoneBook();
		void	add_Contacts(void);
		void	search_Contacts(void);
};



void	welcome(void);

#endif