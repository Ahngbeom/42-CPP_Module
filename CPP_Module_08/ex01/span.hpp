/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:31:23 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 15:44:26 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <functional>
# include <iostream>

class Span
{
private:
	std::vector<int>	vec;
	unsigned int	size;
public:
	Span(unsigned int N);
	~Span();

	std::vector<int> getVector( void ) const ;
	unsigned int	getSize( void ) const ;
	
	void	printElements( void ) const ;

	void	addNumber(int num);
	
	int		shortestSpan( void );
	int		longestSpan( void );
};

#endif