/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:53:00 by bahn              #+#    #+#             */
/*   Updated: 2022/02/27 00:09:18 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ABC_HPP
# define ABC_HPP

# include "Base.hpp"

class A : public Base
{
	public:
		A(const char type) : Base(type) {};
		~A() {};
};

class B : public Base
{
	public:
		B(const char type) : Base(type) {};
		~B() {};
};

class C : public Base
{
	public:
		C(const char type) : Base(type) {};
		~C() {};
};

#endif