/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:51:45 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 21:46:17 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <fstream>
#include <string>

Brain::Brain()
{
	std::cout << "[Brain] Constructor called" << std::endl;
	
	std::ifstream 	f_ideas;
	std::string		idea;
	
	f_ideas.open("Ideas.txt");
	for (size_t i = 0; i < 100; i++)
	{
		std::getline(f_ideas, idea);
		ideas[i] = idea;
	}
}

Brain::~Brain()
{
	std::cout << "[Brain] Deconstructor called" << std::endl;
}

std::string	Brain::comeToIdea(const int& index) const {
	if (ideas[index].empty())
		return ("..........");
	else
		return (ideas[index]);
}
