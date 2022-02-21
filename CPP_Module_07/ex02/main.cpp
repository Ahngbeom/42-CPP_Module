/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:04:54 by bahn              #+#    #+#             */
/*   Updated: 2022/02/21 21:39:04 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE

    /* Array Elements Checking Myself */
    {
        std::cout << std::endl << "Array Elements Checking..." << std::endl;
        {
            std::cout << "[numbers] " << numbers;
            std::cout << "[mirror] Array {";
            for (size_t i = 0; i < MAX_VAL; i++)
            {
                if (i == MAX_VAL - 10)
                    std::cout << std::endl << "..., ";
                else if (i >= 10 && i < MAX_VAL - 10)
                    continue;
                std::cout << mirror[i];
                if (i != MAX_VAL - 1)
                    std::cout << ", ";
            }
            std::cout << "}" << std::endl;
        }
    }
    /* Array Elements Checking Myself End*/

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        /* Array Copy Checking Myself */
        {
            std::cout << std::endl << "Array Copy Checking..." << std::endl;
            {
                std::cout << "[tmp] " << tmp;
                std::cout << "[test] Array {";
                for (size_t i = 0; i < tmp.getSize(); i++)
                {
                    if (i == tmp.getSize() - 10)
                        std::cout << std::endl << "..., ";
                    else if (i >= 10 && i < tmp.getSize() - 10)
                        continue;
                    std::cout << test[i];
                    if (i != tmp.getSize() - 1)
                        std::cout << ", ";
                }
                std::cout << "}" << std::endl;
            }
        }
        /* Array Copy Checking Myself End*/
    }

    

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    /* Array Elements Checking Myself */
    {
        std::cout << std::endl << "Array Elements Checking..." << std::endl;
        {
            std::cout << "[numbers] " << numbers;
        }
    }
    /* Array Elements Checking Myself End*/

    delete [] mirror;//
    return 0;
}