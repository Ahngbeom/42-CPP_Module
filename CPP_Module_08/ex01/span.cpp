/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:37:01 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 15:45:57 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

Span::Span(unsigned int N) : size(N)
{
}

Span::~Span()
{
}

std::vector<int> Span::getVector( void ) const {
	return (vec);
}

unsigned int	Span::getSize( void ) const {
	return (size);
}

void	Span::printElements( void ) const  {
	std::cout << "[";
	for (unsigned int i = 0; i < getSize(); i++)
	{
		std::cout << vec.at(i);
		if (i != getSize() - 1)
			std::cout << " ";
	}
	std::cout << "]" << std::endl;
}


void	Span::addNumber(int num) {
	if (vec.size() <= this->size)
		vec.push_back(num);
	else
		throw std::exception();
}

int		Span::shortestSpan( void ) {
	std::sort(vec.begin(), vec.end(), std::less<int>());
	return (std::abs((*(vec.begin() + 1)) - (*(vec.begin()))));
}

int		Span::longestSpan( void ) {
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	return (std::abs((*(vec.begin())) - (*(vec.end() - 1))));
}
