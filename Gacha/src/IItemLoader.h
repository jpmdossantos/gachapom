//
// Created by jpmdo on 07/03/2020.
//

#ifndef SRC_IITEMLOADER_H
#define SRC_IITEMLOADER_H

#include <vector>
#include "IItem.h"

class IItemLoader {
public:
    virtual ~IItemLoader() {}
    virtual std::vector<IItem> Parse() = 0;
};

#endif //SRC_IITEMLOADER_H
