/*
 * Registry.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#include "Registry.h"
#include "Item.h"
#include "ItemLoader.h"
#include <iostream>

#include <vector>

Registry::Registry(IItemLoader* loader) {
    this->loader = loader;
    this->load_items();
}

void Registry::load_items() {
    std::vector<std::shared_ptr<IItem>> parsed_items = this->loader->Parse();
    for (auto item : parsed_items) {this->add_item(item);}
	this->add_item(std::make_shared<Item>("ala",1));
	std::cout << "Tamanho do array pos: "<<this->items.size()<<"\n";
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

