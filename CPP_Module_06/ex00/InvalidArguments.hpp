/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidArguments.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:15:52 by bahn              #+#    #+#             */
/*   Updated: 2022/02/19 12:18:24 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVALID_ARGUMENTS_HPP
# define INVALID_ARGUMENTS_HPP

# include <exception>
# include <string>

class InvalidArguments : public std::exception
{
private:
	std::string _error;
public:
	InvalidArguments();
	~InvalidArguments() _GLIBCXX_NOTHROW;

	virtual const char*	what() const _GLIBCXX_NOTHROW;
};




#endif