/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidArguments.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:17:34 by bahn              #+#    #+#             */
/*   Updated: 2022/02/19 12:22:27 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InvalidArguments.hpp"

InvalidArguments::InvalidArguments() : _error("Invalid Arguments.")
{
}

InvalidArguments::~InvalidArguments() _GLIBCXX_NOTHROW
{
}

const char*	InvalidArguments::what() const _GLIBCXX_NOTHROW {
	return (_error.c_str());
}
