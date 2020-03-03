//============================================================================
// Name        : Gacha.cpp
// Author      : jp
// Version     :
// Copyright   : SimpleGacha
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

#include "Registry.h"
#include "Roller.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Registry item_registry;
	Roller gachapom(item_registry);
	return 0;
}
