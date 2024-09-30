/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:50 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 11:41:10 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0 || N > 2147483647)
		return NULL;
    Zombie* horde = NULL;
    try
	{
        horde = new Zombie[N];
    }
	catch (const std::bad_alloc& e)
	{
        std::cerr << "Allocation failed: " << e.what() << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; ++i)
	{
        horde[i].setName(name);
    }
    return horde;
}