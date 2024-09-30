/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:50 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 10:31:16 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0 || N > 2147483647)
		return NULL;
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
	{
        horde[i].setName(name);
    }
    return horde;
}