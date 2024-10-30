/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:24:21 by egomez            #+#    #+#             */
/*   Updated: 2024/10/30 10:24:22 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
//	const int nb = 8;
//	const int nb = -8;
//	const int nb = 0;
//	const int nb = 1000000000;
	Zombie	*horde = zombieHorde(nb, "Foo");

	if (!horde)
		return (1);
	for (int i = 0; i < 8; i++)
		horde[i].announce();
	delete [] horde;
}
