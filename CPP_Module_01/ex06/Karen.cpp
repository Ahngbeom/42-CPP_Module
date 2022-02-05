/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:44:21 by bahn              #+#    #+#             */
/*   Updated: 2022/02/05 15:09:47 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

// typedef	void	(Karen::*func)();

Karen::Karen() : func(NULL)
{
	arr_level[0] = "DEBUG";
	arr_level[1] = "INFO";
	arr_level[2] = "WARNING";
	arr_level[3] = "ERROR";
}

Karen::~Karen()
{
}

void	Karen::debug( void ) {
	std::cout << "[ DEBUG ]" <<std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
	func = &Karen::info;
}
void	Karen::info( void ) {
	std::cout << "[ INFO ]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	func = NULL;
}
void	Karen::warning( void ) {
	std::cout << "[ WARNING ]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	func = &Karen::error;
}
void	Karen::error( void ) {
	std::cout << "[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	func = NULL;
}

void	Karen::insignificant_problem( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	func = NULL;
}


void 	Karen::complain( std::string level ) {
	size_t	i;
	for (i = DEBUG; i <= ERROR; i++)
	{
		if (level.compare(arr_level[i]) == 0 )
			 break ;
	}
	switch (i)
	{
	case DEBUG:
		func = &Karen::debug;
		break;
	case INFO:
		func = &Karen::info;
		break;
	case WARNING:
		func = &Karen::warning;
		break;
	case ERROR:
		func = &Karen::error;
		break;
	default:
		func = &Karen::insignificant_problem;
		break;
	}
	while (func != NULL) {
		(this->*func)();
		std::cout << std::endl;
	}
}
