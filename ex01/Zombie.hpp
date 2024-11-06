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
#include <string>

class	Zombie{

private:
	std::string name;

public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void	announce(void);
	void	set_name(std::string _name);
};

Zombie* zombieHorde(int N, std::string name);

#endif