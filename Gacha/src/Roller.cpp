/*
 * Roller.cpp
 *
 *  Created on: 2 de mar de 2020
 *      Author: jsantos
 */

#include "Roller.h"
Roller::Roller(IRegistry *registry) {
	this->items_registry = registry;
}


void Roller::roll() const {
	auto registry_iterator = this->items_registry->create_iterator();
	float flim = 68/2187.0;//3.109% //1/128.0; //0,007 group 1
    float elim = 102/2187.0 + flim;//4.663 //1/64.0 + flim; //0,02 group 2
    float dlim = 152/2187.0 + elim; //6.95% //1/32.0 + elim; //0,05 group 3
    float clim = 229/2187.0 + dlim;//10.471% //1/16.0 + dlim; //0,12 group 4
    float blim = 343/2187.0 + clim;//15.684% //1/8.0 + clim; //0,24 group 5
    float alim = 514/2187.0 + blim;//23.503% //1/4.0 + blim; //0,49 group 6

    //##########################################
    const unsigned int seed = time(0);
    // Generating random numbers with C++11's random requires an engine and a distribution.
    // This is an engine based on the Mersenne Twister 19937 (64 bits):
    std::mt19937_64 rng(seed);

    // Then we create a distribution. We'll start with a uniform distribution in the
    // default [0, 1) range:
    std::uniform_real_distribution<double> unif;
    //##########################################

	//float random_number = (rand() % 1000)/1000.0;
	float random_number = unif(rng);
    int group_id;
    if( random_number <= flim )
    {
        group_id=1;
    }else if(random_number <= elim)
    {
        group_id=2;
    }
    else if(random_number <= dlim)
    {
        group_id=3;
    }else if(random_number <= clim)
    {
        group_id=4;
    }else if(random_number <= blim)
    {
        group_id=5;
    }else if(random_number <= alim)
    {
        group_id=6;
    } else
    {
        group_id=7;
    }

    std::vector<std::string> names;
	while (registry_iterator->HasNext())
	{
		auto item = registry_iterator->Next();
		if (item->get_weight() == group_id)
		{
			names.push_back(item->get_name());
		}
	}

    std::cout<<std::endl;
    auto max_index = names.size() - 1;
    std::uniform_int_distribution<int> iunif(0,max_index);
	int random_index = iunif(rng);
	std::cout <<"Group: "<<group_id<<std::endl;
	std::cout <<"Name: "<<names[random_index]<<std::endl;

}

