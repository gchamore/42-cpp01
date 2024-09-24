/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/23 16:42:37 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPtr = &brain;
	std::string& brainRef = brain;

	std::cout << &brain << std::endl;
	std::cout << brainPtr << std::endl;
	std::cout << &brainRef << std::endl;

	std::cout << brain << std::endl;
	std::cout << *brainPtr << std::endl;
	std::cout << brainRef << std::endl;

	return 0;
}