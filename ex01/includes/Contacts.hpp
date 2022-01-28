/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:07:19 by bahn              #+#    #+#             */
/*   Updated: 2022/01/29 00:58:54 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define DISPLAY_MAX_WIDTH	11

enum	field_index
{
	Index,
	FirstName,
	LastName,
	Nickname,
	PhoneNumber,
	DarkestSecret
};

class	Contacts
{
	private:
		static	std::string	field[6];
		std::string			informations[6];
		
	public:
		Contacts();
		~Contacts();
		// void	set_Contacts(std::size_t index);
		// void	get_Contacts(void);
		// void	field_display(void);
		std::string	display_input_field(std::size_t index);
		void		display_field();
		void		display_borderLine();
		void		set_info(std::size_t index, std::string info);
		void		get_info();
};

#endif