/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:24:53 by bahn              #+#    #+#             */
/*   Updated: 2022/01/26 22:19:03 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#define NO_ARGU "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"

static void	str_upper(const char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		std::cout << (char)toupper(str[i]);
	}
}

int main(int argc, char const *argv[])
{
	int	i;

	if (argc == 1)
		std::cout << NO_ARGU;
	i = 0;
	while (argv[++i] != NULL)
	{
		str_upper(argv[i]);
	}
	std::cout << "\n";
	return 0;
}
