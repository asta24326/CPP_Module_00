/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidarsharafeev <aidarsharafeev@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:51:33 by aidarsharaf       #+#    #+#             */
/*   Updated: 2026/06/13 20:51:33 by aidarsharaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
	Zombie* myHorde = zombieHorde(5, "I'm Zombie");

	for(int i = 0; i < 5; i++) {
		myHorde[i].announce();
	}
	delete[] myHorde;
	return 0;
}