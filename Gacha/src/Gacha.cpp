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
	ItemLoader novo("C:\\Users\\jpmdo\\file.txt");
    Registry item_registry(&novo);
	Roller gachapom(&item_registry);
	gachapom.roll();
	for (int i = 0; i <= 10; i++)
	{
		gachapom.roll();
	}
	return 0;
}
