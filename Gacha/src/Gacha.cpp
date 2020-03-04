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
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Registry item_registry;
	//Registry* ptr = &item_registry;
	Roller gachapom(&item_registry);
	gachapom.roll();


	return 0;
}
