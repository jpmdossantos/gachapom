/*
 * Registry.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef REGISTRY_H_
#define REGISTRY_H_

#include <vector>
#include <memory>
#include "IRegistry.h"
//#include "ItemIterator.h"

class Registry: public IRegistry {
public:
	Registry();
	void add_item(std::shared_ptr<IItem>) override;
	void load_items() override;
//	std::unique_ptr<IItemIterator> create_iterator() override;
private:
	std::vector<std::shared_ptr<IItem>> items;
	std::vector<int> numbers;
	int cummulative_weight;
};

#endif /* REGISTRY_H_ */
