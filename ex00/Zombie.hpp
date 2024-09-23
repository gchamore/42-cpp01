/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:57 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/23 14:57:21 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void announce( void );
	
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif