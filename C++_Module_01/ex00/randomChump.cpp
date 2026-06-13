/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidarsharafeev <aidarsharafeev@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:51:07 by aidarsharaf       #+#    #+#             */
/*   Updated: 2026/06/13 20:51:08 by aidarsharaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void randomChump(std::string name) {

	// Allocate a Zombie object entirely on the stack.
	// Memory is managed automatically within this function's scope.

	Zombie stackZombie(name);

	// Instruct the stack-allocated zombie to execute it's member function

	stackZombie.announce();

} // Scope closes here: stackZombie is implicitly destroyed, invoking the destructor