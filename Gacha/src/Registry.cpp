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
	Item item1("teste", 1);
	Item item2("teste2", 3);


	std::shared_ptr<IItem> item3 = std::make_shared<Item> ("teste3", 5);
	auto item4 = std::make_shared<Item> ("teste4", 7);
	auto item5 = std::make_shared<Item> ("teste5", 11);

	add_item(item3);
	add_item(item4);
}

void Registry::add_item(std::shared_ptr<IItem> item) {
	this->cummulative_weight += item->get_weight();
	item->set_cummulative_weight(this->cummulative_weight);
	this->items.push_back(item);
}
/*
std::unique_ptr<IItemIterator> Registry::create_iterator() {
	return( std::make_unique<ItemIterator>(this->items) );
}*/
