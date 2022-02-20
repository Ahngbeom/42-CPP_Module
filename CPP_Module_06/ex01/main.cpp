/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:13:02 by bahn              #+#    #+#             */
/*   Updated: 2022/02/20 20:52:28 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

std::ostream&	operator<<(std::ostream& ostrm, Data &data) {
	ostrm << data.ch << std::endl;
	ostrm << data.integerNum << std::endl;
	ostrm << data.floatNum << std::endl;
	ostrm << data.doubleNum;
	return (ostrm);
}

int main()
{
	Data	data('*', 42, 42.05f, 42.42);
	std::cout << &data << std::endl;

	uintptr_t serial = serialize(&data);
	std::cout << serial << std::endl;

	Data	*deserial = deserialize(serial);
	std::cout << *deserial << std::endl;
	
	Data	data2('*', 19, 97.07f, 04.1);
	std::cout << &data2 << std::endl;

	serial = serialize(&data2);
	std::cout << serial << std::endl;

	deserial = deserialize(serial);
	std::cout << *deserial << std::endl;


	return 0;
}
