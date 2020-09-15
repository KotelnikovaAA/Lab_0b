//
// Created by Anna on 14.09.2020.
//

#ifndef LAB_0B_WRITER_H
#define LAB_0B_WRITER_H

#include "../OperationWithMap.h"

namespace convertation {
    class Writer {
    public:
        void setMap(convertation::OperationWithMap OperationWithMap);
        void writeCSVFile(const convertation::OperationWithMap& OperationWithMap) const ;
        std::string getFileOut() const;
    private:
        std::map <int, std::vector<std::string>, std::greater<>> newMp;
        std::string fileOut;
    };
}

#endif //LAB_0B_WRITER_H
