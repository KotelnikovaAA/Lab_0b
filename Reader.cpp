//
// Created by Anna on 12.09.2020.
//

#include "Reader.h"
#include <iostream>
#include <fstream>

convertation::Reader::Reader() {
    this->fileIn = "input.txt";
}

convertation::Reader::Reader(std::string fileIn) {
    this->fileIn = fileIn;
}

std::map<std::string, int> convertation::Reader::fillMap() const {
    std::ifstream input;                                    // создали входной поток
    input.open(getFileIn());                             // открыли поток на вход с файла
    std::map<std::string, int> mp;                          // создаем MAP

    std::string newString;                                  // строка, в к-ю считываем с потока (до первого \n, считывая, но не включая его)
    std::string newWord;                                    // очередное слово
    while (std::getline(input, newString)) {        // считываем строку с потока
        for (auto curSymbol : newString) {
            if (!isPermissibleSymbol(curSymbol)) {
                mp.insert(std::pair<std::string, int>(newWord, 1));
                newWord.clear();
            } else newWord += curSymbol;
        }
    }

    input.close();                                          // закрыли входной поток
    return mp;
}

bool convertation::Reader::isPermissibleSymbol(char symbol) const {
    return (betweenLimits(symbol, '0', '9') ||
           betweenLimits(symbol, 'a', 'z') ||
           betweenLimits(symbol, 'A', 'Z'));
}

bool convertation::Reader::betweenLimits(char symbol, char limit_1, char limit_2) const {
    return (symbol >= limit_1 && symbol <= limit_2);
}

std::string convertation::Reader::getFileIn() const {
    return fileIn;
}
