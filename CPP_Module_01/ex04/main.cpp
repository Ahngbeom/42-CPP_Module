/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:36:56 by bahn              #+#    #+#             */
/*   Updated: 2022/02/05 00:12:35 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
	if (argc != 4) {
		std::cout << "Error : Enter the arguments in the correct format." << std::endl;
		std::cout << "./replace [FILE NAME] [FIND STRING] [REPLACE STRING]" << std::endl;
	}
	else if (std::string(argv[1]).empty() || \
				std::string(argv[2]).empty() || \
					std::string(argv[3]).empty()) {
		std::cout << "Error : Arguments must not be empty." << std::endl;
		std::cout << "./replace [FILE NAME] [FIND STRING] [REPLACE STRING]" << std::endl;
	}
	else {
		std::ifstream input_fstrc;
		input_fstrc.open(argv[1]);
		
		std::ofstream output_fstrc;
		output_fstrc.open(std::string(argv[1]).append(".replace").c_str());
		std::string	line;
		do
		{
			std::getline(input_fstrc, line);
			std::size_t find_str = line.find(argv[2]);
			if (find_str != std::string::npos) {
				output_fstrc << line.substr(0, find_str);
				output_fstrc << argv[3];
				line = line.substr(find_str + std::string(argv[2]).length());
				output_fstrc << line;
			}
			else
				output_fstrc << line;
			if (!input_fstrc.eof())
				output_fstrc << std::endl;
		} while (!input_fstrc.eof());
	}	
	return 0;
}
