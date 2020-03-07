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
#include "RegistryIterator.h"
#include "IItemLoader.h"

class Registry: public IRegistry {
public:
	Registry(IItemLoader*);
	void add_item(std::shared_ptr<IItem>) override;
	void load_items() override;
	const std::vector<std::shared_ptr<IItem> >& getItems() const {return items;}
	std::shared_ptr<IRegistryIterator> create_iterator() override;
	int getCummulativeWeight() override;

private:
	std::vector<std::shared_ptr<IItem>> items;
	IItemLoader* loader;
	int cummulative_weight = 0;
};

#endif /* REGISTRY_H_ */
