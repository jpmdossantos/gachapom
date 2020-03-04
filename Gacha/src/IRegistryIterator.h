/*
 * IRegistryIterator.h
 *
 *  Created on: 4 de mar de 2020
 *      Author: jsantos
 */
#ifndef IREGISTRYITERATOR_H_
#define IREGISTRYITERATOR_H_

#include <memory>
#include "IItem.h"

class IRegistryIterator {
public:
	virtual ~IRegistryIterator() {}
	virtual bool HasNext() = 0;
	virtual std::shared_ptr<IItem>Next() = 0;
};

#endif /* IREGISTRYITERATOR_H_ */
