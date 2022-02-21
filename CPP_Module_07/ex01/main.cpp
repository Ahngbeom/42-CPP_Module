/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:04:13 by bahn              #+#    #+#             */
/*   Updated: 2022/02/21 14:26:29 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define ARRAY_SIZE 5

template <typename T>
void	display(T& t) {
	std::cout << t << std::endl;
}

int main()
{
	int	array[ARRAY_SIZE] = {0, 1, 2, 3, 4};
	::iter(array, ARRAY_SIZE, display);

	std::string array2[ARRAY_SIZE] = {
		"Dancing on the edge 'bout to take it too far",
		"it's messing with my head, how i mess with your heart",
		"if you wake up in your bed alone in the dark",
		"I'm sorry gotta leave before you love me",
		"leave before you love me",
	};
	::iter(array2, ARRAY_SIZE, display);
	
	return 0;
}
