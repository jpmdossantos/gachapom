/*
 * IItem.h
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#ifndef IITEM_H_
#define IITEM_H_
#include <string>

class IItem {
public:
	virtual ~IItem() {}
	virtual std::string get_name() const = 0;
	virtual int get_weight() const = 0;
	virtual void set_cummulative_weight(const int) = 0;
};

#endif /* IITEM_H_ */
