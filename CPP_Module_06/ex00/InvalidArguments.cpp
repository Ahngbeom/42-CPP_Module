/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InvalidArguments.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:17:34 by bahn              #+#    #+#             */
/*   Updated: 2022/02/25 20:14:54 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InvalidArguments.hpp"

InvalidArguments::InvalidArguments() : _error("Invalid Arguments.")
{
}

InvalidArguments::~InvalidArguments() _NOEXCEPT
{
}

const char*	InvalidArguments::what() const _NOEXCEPT {
	return (_error.c_str());
}
