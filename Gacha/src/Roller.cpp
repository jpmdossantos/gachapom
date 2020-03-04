/*
 * Roller.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#include "Roller.h"

Roller::Roller(IRegistry *registry) {
	this->items_registry = registry;
	srand (time(NULL));
}


void Roller::roll() const {
	auto registry_iterator = items_registry->create_iterator();
	int random_number = std::rand()%this->items_registry->getCummulativeWeight() + 1;
	while (registry_iterator->HasNext())
	{
		auto item = registry_iterator->Next();
		if (item->get_cummulative_weight() >= random_number)
		{
			std::cout << item->get_name() << std::endl;
			break;
		}
	}
}

