/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:04:54 by bahn              #+#    #+#             */
/*   Updated: 2022/03/03 00:27:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
std::ostream&	operator<<(std::ostream& ostrm, Array<T>& array) {
	ostrm << "Array {";
	for (unsigned i = 0; i < array.size(); i++)
	{
		ostrm << array[i];
		if (i != array.size() - 1)
			ostrm << ", ";
	}
	ostrm << "}" << std::endl;
	return (ostrm);
}

int main( void )
{
    Array<int>  numbers(10);
    int*        intArray = new int[10];
    
    std::srand(time(NULL));
    
    for (std::size_t i = 0; i < numbers.size(); i++)
    {
        int value = rand() % 100;
        numbers[i] = value;
        intArray[i] = value;
    }

    {
        std::cout << std::endl << "[Array Elements Checking]" << std::endl;
        
        std::cout << "[numbers] " << numbers;
        std::cout << "[intArray] Array {";
        for (std::size_t i = 0; i < numbers.size(); i++) {
            std::cout << intArray[i];
            if (i != 10 - 1)
                std::cout << ", ";
        }
        std::cout << "}" << std::endl;

        delete [] intArray;
    }

    std::cout << std::endl;
    
    {
        std::cout << "[Array Copy & Assignment Checking]" << std::endl;
        
        Array<int> copy(numbers);
        Array<int> assign = copy;

        std::cout << "[copy] " << copy;
        std::cout << "[assign] " << assign;
    }

    std::cout << std::endl;

    {
        std::cout << "[If accessing an element is out of the limits]" << std::endl;
        try
        {
            numbers[numbers.size()] = 99999;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            numbers[-1] = 99999;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl;

    {
        std::cout << "[Array<std::string> TEST]" << std::endl;
        Array<std::string>  strArr(5);

        strArr[0] = "Always living on the run (always living on the run)";
        strArr[1] = "Never setting with the sun (never setting with the sun)";
        strArr[2] = "Our hearts have broken and they've loved (loved, loved, loved)";
        strArr[3] = "But we're still young (but we're still young)";
        strArr[4] = "And the best is yet to come";

        for (std::size_t i = 0; i < strArr.size(); i++)
        {
            std::cout << strArr[i] << std::endl;
        }
    }

    return 0;
}