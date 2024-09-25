/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:55 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/25 14:33:28 by gchamore         ###   ########.fr       */
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
    void (Harl::*functions[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int levelIndex = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            levelIndex = i;
            break;
        }
    }

    if (levelIndex == -1)
    {
        std::cout << "Invalid level: " << level << std::endl;
        return;
    }

    switch (levelIndex)
    {
        case 0:
            (this->*functions[0])();
        case 1:
            (this->*functions[1])();
        case 2:
            (this->*functions[2])();
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "Invalid level: " << level << std::endl;
            break;
    }
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

