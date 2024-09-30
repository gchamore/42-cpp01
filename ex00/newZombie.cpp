/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:52 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 11:09:41 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	try
	{
        return new Zombie(name);
    }
	catch (const std::bad_alloc& e)
	{
        std::cerr << "Allocation failed: " << e.what() << std::endl;
        return NULL;
    }
}