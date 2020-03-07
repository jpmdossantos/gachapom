//============================================================================
// Name        : Gacha.cpp
// Author      : jp
// Version     :
// Copyright   : SimpleGacha
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <memory>
#include "Registry.h"
#include "Roller.h"
#include "RegistryIterator.h"
#include "ItemLoader.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ItemLoader novo("ola");
    Registry item_registry(&novo);
	//Registry* ptr = &item_registry;
	Roller gachapom(&item_registry);
	for (int i = 0; i <= 10; i++)
	{
		gachapom.roll();
	}


	return 0;
}
