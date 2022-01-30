/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:00:37 by bahn              #+#    #+#             */
/*   Updated: 2022/01/31 00:09:28 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
	Zombie	zb_1(std::string("Police Officer"));
	Zombie	zb_2(std::string("Aide"));
	Zombie	*zb_3 = newZombie("Congressman");
	
	zb_1.announce();
	zb_2.announce();
	zb_3->announce();
	randomChump("⭐President⭐");
	zb_3->~Zombie();
	return 0;
}
