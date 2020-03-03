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

class Registry: public IRegistry {
public:
	Registry();
	virtual ~Registry() { }
	void add_item(std::shared_ptr<IItem>) override;
	void load_items() override;

private:
	std::vector<std::shared_ptr<IItem>> items;
	std::vector<int> numbers;
	int cummulative_weight;
};

#endif /* REGISTRY_H_ */
