/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:23:20 by bahn              #+#    #+#             */
/*   Updated: 2022/02/14 22:25:50 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
class Animal
{
protected:
	std::string type;
	
public:
	Animal();
	virtual ~Animal();
	
	virtual std::string	getType( void ) const = 0;

	virtual void	makeSound( void ) const = 0;
	virtual void	getIdea(const int& index) const = 0;
};

#endif