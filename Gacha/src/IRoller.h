/*
 * IRoller.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef IROLLER_H_
#define IROLLER_H_

class IRoller {
public:
	virtual ~IRoller() {}
	virtual void roll() const = 0;
};

#endif /* IROLLER_H_ */
