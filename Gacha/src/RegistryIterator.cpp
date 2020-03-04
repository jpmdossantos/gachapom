/*
 * RegistryIterator.cpp
 *
 *  Created on: 4 de mar de 2020
 *      Author: jsantos
 */

#include "RegistryIterator.h"
#include <iostream>

RegistryIterator::RegistryIterator(
		std::vector<std::shared_ptr<IItem> > items_list) {
	this->items_list = items_list;
}

bool RegistryIterator::HasNext() {
	auto number_of_items = this->items_list.size();
	return ((int)number_of_items > this->current_position);
}

std::shared_ptr<IItem> RegistryIterator::Next() {
	auto item = this->items_list[this->current_position];
	this->current_position++;
	return item;
}
