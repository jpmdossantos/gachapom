/*
 * IRegistry.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef IREGISTRY_H_
#define IREGISTRY_H_

#include <memory>
#include "IRegistryIterator.h"

//class IItemIterator;
class IItem;

class IRegistry {
public:
	virtual ~IRegistry() {}
	virtual void add_item(std::shared_ptr<IItem>) = 0;
	virtual void load_items() = 0;
	virtual std::shared_ptr<IRegistryIterator> create_iterator()=0;
};

#endif /* IREGISTRY_H_ */
