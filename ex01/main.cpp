/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 11:45:08 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 2147483647;
	Zombie* zombies = zombieHorde(N, "zombie_army");
	if (zombies == NULL)
	{
        std::cerr << "Failed to allocate zombies. Exiting..." << std::endl;
        return 1;
    }
	for (int i = 0; i < N; ++i)
	{
        zombies[i].announce();
    }

	delete[] zombies;

	return 0;
}