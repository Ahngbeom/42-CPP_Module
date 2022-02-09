/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:50 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 18:43:53 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	name;			// 이름
	int			hitPoints;		// 체력
	int			energyPoints;	// ???
	int			attackDamage;	// 공격력, 공격 피해량
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void		displayAttributes( void );
	std::string	getName( void );
	int			getHitPoints( void );
	int			getEnergyPoints( void );
	int			getAttackDamage( void );

	void 		attack(std::string const & target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
};

#endif