/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:35:57 by bahn              #+#    #+#             */
/*   Updated: 2022/02/21 14:21:49 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T array[], std::size_t length, void(*func)(T& t)) {
	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif