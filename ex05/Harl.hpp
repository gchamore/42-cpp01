/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:57 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 16:41:17 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Harl {
	
public:
	Harl(void);
	~Harl(void);

	void complain( std::string level );

private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );
};

#endif