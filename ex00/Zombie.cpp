/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:55 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/23 16:22:42 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) 
{
	std::cout << "new " << Zombie::_name << std::endl;
	return;
}
Zombie::Zombie( void )
{
	std::cout << "new " << Zombie::_name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "remove " << Zombie::_name << std::endl;
	return;
}

void Zombie::announce( void )
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}