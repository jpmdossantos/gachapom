/*
 * Roller.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef ROLLER_H_
#define ROLLER_H_

#include "Registry.h"
#include "IRoller.h"

class Roller: public IRoller {
	IRegistry* items_registry;
public:
	Roller(IRegistry*);
	void roll() const override;
};

#endif /* ROLLER_H_ */
