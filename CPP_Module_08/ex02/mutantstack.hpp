/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:57:04 by bahn              #+#    #+#             */
/*   Updated: 2022/02/22 17:04:40 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

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
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
	
	
	iterator	begin( void ) {
		return (this->c.begin());	
	}

	iterator	end( void ) {
		return (this->c.end());	
	}
	
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



#endif