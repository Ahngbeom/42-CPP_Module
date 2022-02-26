/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:35:10 by bahn              #+#    #+#             */
/*   Updated: 2022/02/27 00:10:37 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	private:
		const	char	type;
	public:
		Base(const char type) : type(type) {};
		virtual ~Base() {};

		char	getType() const {
			return (type);
		}
};

#endif