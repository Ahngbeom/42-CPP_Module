/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:23:19 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 15:46:11 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span	sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.printElements();

	std::cout << sp.shortestSpan() << std::endl;
	sp.printElements();
	std::cout << sp.longestSpan() << std::endl;
	sp.printElements();

	{
		Span	sp10000 = Span(10000);
		for (int i = -5000; i < 5000; i++)
		{
			sp10000.addNumber(i);
		}

		std::cout << sp10000.shortestSpan() << std::endl;
		std::cout << sp10000.longestSpan() << std::endl;
	}

	return 0;
}
