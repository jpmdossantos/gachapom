/*
 * Registry.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#include "Registry.h"
#include "Item.h"

#include <vector>

Registry::Registry() {
	this->load_items();
}

void Registry::load_items() {
	this->add_item(std::make_shared<Item>("teste1",1));
	this->add_item(std::make_shared<Item>("teste2",3));
	this->add_item(std::make_shared<Item>("teste3",5));
	this->add_item(std::make_shared<Item>("teste4",7));
	this->add_item(std::make_shared<Item>("teste5",11));
}

void Registry::add_item(std::shared_ptr<IItem> item) {
	this->cummulative_weight += item->get_weight();
	item->set_cummulative_weight(this->cummulative_weight);
	this->items.push_back(item);
}

std::shared_ptr<IRegistryIterator> Registry::create_iterator() {
	auto ptr = std::make_shared<RegistryIterator>(this->items);
	return ptr;
}

int Registry::getCummulativeWeight() {
	return this->cummulative_weight;
}
