/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:00:37 by bahn              #+#    #+#             */
/*   Updated: 2022/02/02 20:41:14 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define N	10

int main(void)
{
	Zombie*	zb_horde = zombieHorde(N, "Soldier");
	
	if (zb_horde != NULL)
	{
		for (size_t i = 0; i < N; i++)
		{
			zb_horde[i].announce();
		}
		delete [] zb_horde;
	}
	return (0);
} 
