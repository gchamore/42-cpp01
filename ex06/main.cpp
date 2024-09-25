/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/25 14:49:04 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
        std::cerr << "Wrong issue : Enter a correct level of issue (DEBUG, INFO, WARNING, ERROR)>" << std::endl;
        return 1;
    }
	if (av[1] != std::string("DEBUG") && av[1] != std::string("INFO") && av[1] != std::string("WARNING") && av[1] != std::string("ERROR"))
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
	}
	Harl  harl;
	harl.complain(av[1]);
	return 0;
}