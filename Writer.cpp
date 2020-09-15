//
// Created by Anna on 14.09.2020.
//

#include "Writer.h"
#include <fstream>

void convertation::Writer::writeCSVFile(const convertation::OperationWithMap& OperationWithMap) const {
    std::ofstream output;
    output.open(getFileOut());
    unsigned int wordCounter = OperationWithMap.getWordCounter();

    for (const auto& itemMp : newMp)
        for (const auto& itemVector : itemMp.second)
            output << itemVector << ";" << itemMp.first << ";" << (itemMp.first / wordCounter) << std::endl;

    output.close();
}

void convertation::Writer::setMap(convertation::OperationWithMap OperationWithMap) {
    this->newMp = OperationWithMap.sortMap();
}

std::string convertation::Writer::getFileOut() const {
    return fileOut;
}
