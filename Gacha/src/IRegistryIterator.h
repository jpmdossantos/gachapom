/*
 * IRegistryIterator.h
 *
 *  Created on: 4 de mar de 2020
 *      Author: jsantos
 */
#ifndef IREGISTRYITERATOR_H_
#define IREGISTRYITERATOR_H_

#include <memory>


class IRegistryIterator {
public:
	virtual ~IRegistryIterator() {}
	virtual bool HasNext() = 0;
};

#endif /* IREGISTRYITERATOR_H_ */
