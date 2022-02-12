/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:25:09 by bahn              #+#    #+#             */
/*   Updated: 2022/02/12 12:17:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat();
	~Cat();

	virtual std::string	getType( void ) const;

	virtual void	makeSound( void ) const;
	virtual void	getIdea(const int& index) const;
};

#endif