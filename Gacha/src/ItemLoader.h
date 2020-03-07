//
// Created by jpmdo on 07/03/2020.
//

#ifndef SRC_ITEMLOADER_H
#define SRC_ITEMLOADER_H


#include "IItemLoader.h"
#include <memory>
#include <fstream>

class ItemLoader: public IItemLoader {
public:
    ItemLoader(std::string);
    std::vector<std::shared_ptr<IItem>> Parse() override;
private:
    std::string path;
};


#endif //SRC_ITEMLOADER_H
