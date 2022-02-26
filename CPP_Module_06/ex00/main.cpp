/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:13:02 by bahn              #+#    #+#             */
/*   Updated: 2022/02/26 12:26:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>

#include "InvalidArguments.hpp"

#define INT_MAX 2147483647
#define INT_MIN -2147483647 - 1

void	outputCharacter(double& num) {
	try
	{
		std::cout << "char: ";

		if (std::isnan(num))
			throw "impossible";
		else if (!std::isprint(num))
			throw "Non displayable";
		else 
			std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	}
	catch(char const* message)
	{
		std::cerr << message << std::endl;;
	}
}

void	outputInteger(double& num) {
	try
	{
		std::cout << "int: ";
		if (std::isnan(num))
			throw "impossible";
		else if (num < INT_MIN || num > INT_MAX)		
			throw "impossible";
		else	
			std::cout << static_cast<int>(num) << std::endl;
	}
	catch(char const* message)
	{
		std::cerr << message << std::endl;
	}
}

void	outputFloat(double& num) {
	try
	{
		std::cout << "float: ";
		if (std::isnan(num))
			throw "nanf";
		else if (num < __FLT_MIN__)
			throw "-inff";
		else if (num > __FLT_MAX__)
			throw "+inff";
		if (fmodf(static_cast<float>(num), 1.0) == 0) {
			std::cout.precision(1);
		}
		std::cout << static_cast<float>(num) << "f" << std::endl;
	}
	catch(char const* message)
	{
		std::cerr << message << std::endl;
	}
}

void	outputDouble(double& num) {
	try
	{
		std::cout << "double: ";
		if (std::isnan(num))
			throw "nan";
		else if (num < __DBL_MIN__)
			throw "-inf";
		else if (num > __DBL_MAX__)
			throw "+inf";
		if (fmod(static_cast<double>(num), 1.0) == 0) {
			std::cout.precision(1);
		}
		std::cout << static_cast<double>(num) << std::endl;
	}
	catch(char const* message)
	{
		std::cerr << message << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	try
	{
		if (argc != 2)
			throw InvalidArguments();
		
		double		num = std::atof(argv[1]);

		std::cout << std::fixed;

		outputCharacter(num);
		outputInteger(num);
		outputFloat(num);
		outputDouble(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
