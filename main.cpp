#include <iostream>
#include "Reader.h"
#include "OperationWithMap.h"
#include "Writer.h"

int main(int argc, char* argv[]) {

    if (argc <= 2) {
        std::cout << "Wrong number of parameters sent." << std::endl;
        return 0;
    }

    std::string nameFileIn = argv[1];
    std::string nameFileOut = argv[2];

    using namespace convertation;

    Reader reader(nameFileIn);

    return 0;
}