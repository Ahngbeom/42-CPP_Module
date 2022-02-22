/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:04:29 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 14:22:45 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator	easyfind(T& t, int find) {
	// typename T::iterator elem = std::find(t.begin(), t.end(), find);
	// if (elem == t.end())
	// 	throw std::exception();
	// return (elem);
	return (std::find(t.begin(), t.end(), find));
}

#endif