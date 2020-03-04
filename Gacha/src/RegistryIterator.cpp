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
	return true;
}


