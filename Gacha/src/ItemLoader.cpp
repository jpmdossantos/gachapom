//
// Created by jpmdo on 07/03/2020.
//

#include "ItemLoader.h"

ItemLoader::ItemLoader(std::string path) {
    this->path = path;
}

std::vector<std::shared_ptr<IItem>> ItemLoader::Parse() {
    return std::vector<std::shared_ptr<IItem>>();
}



