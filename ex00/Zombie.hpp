/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:24:32 by egomez            #+#    #+#             */
/*   Updated: 2024/10/30 10:24:34 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie{

public:
	std::string name;
	void	announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

#endif