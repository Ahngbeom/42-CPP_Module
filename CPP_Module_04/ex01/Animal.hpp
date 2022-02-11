/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:23:20 by bahn              #+#    #+#             */
/*   Updated: 2022/02/11 22:05:21 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
	
public:
	Animal();
	virtual ~Animal();
	
	std::string	getType( void ) const;

	virtual void	makeSound( void ) const;
	virtual void	getIdea(const int& index) const;
};

#endif