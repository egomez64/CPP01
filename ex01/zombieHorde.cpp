/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:33:24 by egomez            #+#    #+#             */
/*   Updated: 2024/10/30 17:33:31 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N < 1)
	{
		std::cout << "bro, did you really try to create a zombies horde with no zombie ?" << std::endl;
		return (NULL);
	}

	Zombie	*horde = new (std::nothrow) Zombie[N];

	if (!horde){
		std::cout << "actually, there is probably way too much zombies, try with less bro" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++) {
		horde[i].set_name(name);
	}
	return (horde);
}
