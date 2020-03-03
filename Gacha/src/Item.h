/*
 * Item.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>

#include "IItem.h"

class Item: public IItem {
public:
	Item(std::string, int);
	std::string get_name() const override;
	int get_weight() const override;
	void set_cummulative_weight(const int);

private:
	std::string name;
	int weight;
	int cummulative_weigth = 0;
};

#endif /* ITEM_H_ */
