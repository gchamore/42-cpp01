/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 17:03:02 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Harl.hpp"

int main()
{
	Harl  harl;

	std::string cmd;
	while (true)
	{
		std::cout << "Enter level of issue (DEBUG, INFO, WARNING, ERROR) = " << std::flush;
        if (!std::getline(std::cin, cmd)) 
			return(std::cout << std::endl << "Empty input detected. Exiting..." << std::endl, 0);
		else if (cmd == "EXIT" || cmd == "exit")
			return 0;
		harl.complain(cmd);
	}
	return 0;
}