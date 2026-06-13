/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidarsharafeev <aidarsharafeev@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:52:19 by aidarsharaf       #+#    #+#             */
/*   Updated: 2026/06/13 20:52:20 by aidarsharaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

// constructor
Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType(void) const {
	
	return this->_type;
}

void Weapon::setType(const std::string& type) {
	this->_type = type;
}
