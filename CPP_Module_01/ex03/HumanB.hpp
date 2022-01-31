/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:24:44 by bahn              #+#    #+#             */
/*   Updated: 2022/01/31 02:25:51 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB();
	HumanB( std::string name );
	~HumanB();
	void	setWeapon( Weapon& weapon );
	void	attack( void );
};


#endif