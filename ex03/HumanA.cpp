/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:45:33 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 14:16:58 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	// std::cout << _name << " get this weapon ! - " << _weapon.getType() << " - " << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	// std::cout << _name << " drop his weapon - " << _weapon.getType() << " - ..." << std::endl;
	return;
}

void HumanA::attack(void) const
{
    std::cout << std::endl << this->_name << " attacks with their " << this->_weapon.getType() << std::endl << std::endl;
}