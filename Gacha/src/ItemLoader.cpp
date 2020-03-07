//
// Created by jpmdo on 07/03/2020.
//

#include <c++/4.8.3/iostream>
#include <sstream>
#include "ItemLoader.h"
#include "Item.h"

ItemLoader::ItemLoader(std::string path) {
    this->path = path;
}

std::vector<std::shared_ptr<IItem>> ItemLoader::Parse() {
    std::ifstream file(this->path);
    std::vector<std::shared_ptr<IItem>> items;
    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        std::stringstream ss(line);
        std::string name;
        std::string weight;
        std::getline(ss, name, ',');
        std::getline(ss, weight);
        int weightint = std::stoi(weight);
        auto item = std::make_shared<Item>(name,weightint);
        items.push_back(item);
    }
    std::cout <<"Dados carregados: "<<items.size()<<"\n";
    file.close();
    return items;
}



