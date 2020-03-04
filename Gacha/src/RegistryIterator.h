/*
 * RegistryIterator.h
 *
 *  Created on: 4 de mar de 2020
 *      Author: jsantos
 */

#ifndef REGISTRYITERATOR_H_
#define REGISTRYITERATOR_H_

#include <memory>
#include "IRegistryIterator.h"
#include "IItem.h"
#include <vector>

class RegistryIterator: public IRegistryIterator {
public:
	RegistryIterator( std::vector< std::shared_ptr<IItem> > );
	bool HasNext() override;
private:
	int current_position = 0;
	std::vector<std::shared_ptr<IItem>> items_list;
};

#endif /* REGISTRYITERATOR_H_ */
