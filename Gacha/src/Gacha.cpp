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
    ItemLoader parser("C:\\python3\\codes\\file.py");
    Registry item_registry(&parser);
	Roller gachapom(&item_registry);
	gachapom.roll();
	return 0;
}
