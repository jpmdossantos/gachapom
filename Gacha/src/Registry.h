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

class Registry: public IRegistry {
public:
	Registry();
	Registry(const Registry&);
	void add_item(std::shared_ptr<IItem>) override;
	void load_items() override;
	int getCummulativeWeight() const {return cummulative_weight;}
	const std::vector<std::shared_ptr<IItem> >& getItems() const {return items;}
	std::shared_ptr<IRegistryIterator> create_iterator() override;

private:
	std::vector<std::shared_ptr<IItem>> items;
	std::vector<int> numbers;
	int cummulative_weight=0;
};

#endif /* REGISTRY_H_ */
