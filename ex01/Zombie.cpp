/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:24:47 by egomez            #+#    #+#             */
/*   Updated: 2024/10/30 10:24:48 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie() {
	name = "zombie";
}

Zombie::Zombie(std::string _name) {
	name = _name;
}

Zombie::~Zombie() {
	std::cout << name << " has been destroy" << std::endl;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string _name)
{
	name = _name;
}
