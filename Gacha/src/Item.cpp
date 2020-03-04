/*
 * Item.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */
#include "Item.h"

Item::Item(std::string name, int weight) {
	this->name = name;
	this->weight = weight;
}

std::string Item::get_name() const{
	return name;
}

int Item::get_weight() const{
	return weight;
}

void Item::set_cummulative_weight(const int weight) {
	this->cummulative_weigth = weight;
}

int Item::get_cummulative_weight() {
	return this->cummulative_weigth;
}
