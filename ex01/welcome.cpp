/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:52:57 by bahn              #+#    #+#             */
/*   Updated: 2022/01/26 23:53:40 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	welcome(void)
{
	std::cout << "\e[1;100m                                        \e[0m" << std::endl;
	std::cout << "\e[1;100m             \e[0m \e[33mWelcome to\e[0m \e[1;100m               \e[0m" << std::endl;
	std::cout << "\e[1;100m             \e[0m \e[32;1;5mPhone Book\e[0m \e[1;100m               \e[0m" << std::endl;
	std::cout << "\e[1;100m                                        \e[0m" << std::endl;
}