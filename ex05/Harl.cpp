/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:55 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 17:03:57 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "new Harl" << std::endl;
	return;
}

Harl::~Harl(void)
{
	std::cout << "remove Harl" << std::endl;
	return;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*functions[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    
	for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Invalid level: " << level << std::endl;
}

void Harl::_debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years!" << std::endl;
}

void Harl::_error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

