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

#include "iostream"

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPTR = &brain;
	std::string& brainREF = brain;

	std::cout << "\033[31m" << &brain << "\033[0m" << std::endl;
	std::cout << "\033[32m" << brainPTR << "\033[0m" << std::endl;
	std::cout << "\033[33m" << &brainREF << "\033[0m" << std::endl;

	std::cout << std::endl;

	std::cout << "\033[31m" << brain << "\033[0m" << std::endl;
	std::cout << "\033[32m" << *brainPTR << "\033[0m" << std::endl;
	std::cout << "\033[33m" << brainREF << "\033[0m" << std::endl;
}
