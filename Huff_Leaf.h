//
// Created by Eddy Ekofo on 09/04/2018.
//

#ifndef ALC_CA3_HUFF_LEAF_H
#define ALC_CA3_HUFF_LEAF_H

#include <iostream> // std::cout, std::endl
#include <string> // std::string

#include "Node.h"

class Huff_Leaf : Node {
public:
    static char letter;

    Huff_Leaf(char c, float w);

    void print(std::string);
};


#endif //ALC_CA3_HUFF_LEAF_H
