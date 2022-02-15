/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:51:47 by bahn              #+#    #+#             */
/*   Updated: 2022/02/15 11:27:53 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <fstream>
# include <string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	~Brain();
	std::string	comeToIdea(const int& index) const;
};

#endif