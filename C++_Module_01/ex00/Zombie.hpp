/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidarsharafeev <aidarsharafeev@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:51:27 by aidarsharaf       #+#    #+#             */
/*   Updated: 2026/06/13 20:51:29 by aidarsharaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// hpp file plays the role of Declaration of the class itself and it's member functions'(methods) prototypes
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _name; // Private attribute

	public:
		Zombie(std::string name);	// Constructor declaration
		~Zombie(); 					// Destructor declaration

		void announce(void);		// Member function(method) declaration
};

// Declarations of the standalone global functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);


#endif