/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:45:38 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 14:16:34 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	// std::cout << name << "spawn but has no weapon ..." << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	// if (_weapon)
	// {
	// 	std::cout << _name << " drop his weapon - " << this->_weapon->getType() << " - ..." << std::endl;
	// }
	// else
	// 	std::cout << _name << " died without a weapon..." << std::endl;
	return;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
	// std::cout << _name << " finally get this weapon - "<< this->_weapon->getType() << " - from the stock" << std::endl;
	return;
}

void HumanB::attack(void) const
{
    if (this->_weapon)
        std::cout << std::endl << this->_name << " attacks with their " << this->_weapon->getType() << std::endl << std::endl;
    else
        std::cout << this->_name << " has no weapon" << std::endl;
}