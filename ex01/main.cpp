/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 10:34:38 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 21474;
	Zombie* zombies = zombieHorde(N, "zombie_army");
	
	for (int i = 0; i < N; ++i)
	{
        zombies[i].announce();
    }

	delete[] zombies;

	return 0;
}