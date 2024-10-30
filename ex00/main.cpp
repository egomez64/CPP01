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

int main(){
	Zombie	zom1("Foo");
	Zombie*	zom2 = newZombie("FooFoo");

	zom1.announce();
	zom2->announce();
	randomChump("FooFooFoo");
	delete zom2;
}
