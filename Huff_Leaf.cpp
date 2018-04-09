//
// Created by Eddy Ekofo on 09/04/2018.
//

#include "Huff_Leaf.h"


Huff_Leaf::Huff_Leaf(char c, float w) : Node(weight, nullptr, nullptr), letter(c) {}

void Huff_Leaf::print(std::string prefix = "") {

    std::cout << letter << " (" << weight
              << ") -> " << prefix << std::endl;
}
