/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:55 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/27 12:46:09 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name)
{
	std::cout << "new weapon - " << _type << " - available !" << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << "remove weapon - " << _type << " - from stock ... too late to pick this weapon " << std::endl;
	return;
}

std::string Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string newtype)
{
	std::cout << "change this perfect - " << this->_type << " - for a wonderful - " << newtype << " - " << std::endl;
	this->_type = newtype;
	return;
}