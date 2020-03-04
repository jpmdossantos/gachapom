/*
 * Roller.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#include "Roller.h"
#include <iostream>

Roller::Roller(IRegistry *registry) {
	this->items_registry = registry;
}


void Roller::roll() const {
	auto registry_iterator = items_registry->create_iterator();
	while (registry_iterator->HasNext())
	{
		auto item = registry_iterator->Next();
		std::cout << item->get_cummulative_weight()<<std::endl;
	}
}

