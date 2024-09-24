/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:57 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 11:55:36 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon(std::string name);
	~Weapon(void);

	std::string getType(void) const;
	void setType(std::string newtype);

private:
	std::string _type;
};

#endif