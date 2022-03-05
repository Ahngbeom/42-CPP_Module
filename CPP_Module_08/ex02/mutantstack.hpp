/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:57:04 by bahn              #+#    #+#             */
/*   Updated: 2022/03/05 14:42:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
private:	

public:
	MutantStack();
	MutantStack(const MutantStack& mstack);
	~MutantStack();

	MutantStack<T>& operator=(const MutantStack<T>& other);

	typedef typename std::stack<T>::container_type::iterator	iterator;
	
	iterator	begin( void );

	iterator	end( void );
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& mstack) {
	*this = mstack;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
	if (this != &other)
		*this = other;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void ) {
	return (this->c.begin());	
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void ) {
	return (this->c.end());	
}

#endif