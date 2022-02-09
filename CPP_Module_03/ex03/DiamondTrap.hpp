/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:54:43 by bahn              #+#    #+#             */
/*   Updated: 2022/02/09 22:54:20 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	void	attack(std::string const & target);
};

#endif