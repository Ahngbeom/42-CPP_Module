/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:04:46 by bahn              #+#    #+#             */
/*   Updated: 2022/01/31 00:06:14 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	_name;
	// std::string	_announce;
public:
	Zombie();
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif