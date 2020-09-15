//
// Created by Anna on 12.09.2020.
//

#include <string>
#include <map>
#include "../OperationWithMap.h"

#ifndef LAB_0B_READER_H
#define LAB_0B_READER_H


#endif //LAB_0B_READER_H

namespace convertation {
    class Reader {

    public:
        Reader();
        Reader(std::string fileIn);
        std::string getFileIn() const;
        std::map<std::string, int> fillMap() const ;
        bool betweenLimits(char symbol, char limit_1, char limit_2) const ;
        bool isPermissibleSymbol(char symbol) const ;

    private:
        std::string fileIn;
    };
}
