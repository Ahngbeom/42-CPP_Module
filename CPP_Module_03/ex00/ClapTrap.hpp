/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:52:50 by bahn              #+#    #+#             */
/*   Updated: 2022/02/08 19:58:56 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif