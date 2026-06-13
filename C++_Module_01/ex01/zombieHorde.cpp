/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidarsharafeev <aidarsharafeev@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:51:46 by aidarsharaf       #+#    #+#             */
/*   Updated: 2026/06/13 20:51:46 by aidarsharaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0) {
		std::cout << "Negative or zero amount of Zombies!" << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N]; // declaring Zombie array
	for (int i = 0; i < N; i++) {
		std::stringstream ss;
		ss << name;
		ss << "_";
		ss << i;
		horde[i].setName(ss.str());
	}
	return (horde);
}