/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:00:37 by bahn              #+#    #+#             */
/*   Updated: 2022/01/31 00:50:27 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define N	10

int main(void)
{
	Zombie*	zb_horde = zombieHorde(N, "Soldier");

	for (size_t i = 0; i < N; i++)
	{
		zb_horde[i].announce();
	}

	for (size_t i = 0; i < N; i++)
	{
		zb_horde[i].~Zombie();
	}
	return 0;
}
