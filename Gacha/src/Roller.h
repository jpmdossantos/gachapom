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
	Registry items_registry;
public:
	Roller(Registry);
	void roll() const override;
};

#endif /* ROLLER_H_ */
