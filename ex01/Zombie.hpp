/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:57 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/23 15:32:18 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie {
	
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void announce() const;
    void setName(std::string name);
	
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif