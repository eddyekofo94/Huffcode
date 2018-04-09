//
// Created by Eddy Ekofo on 09/04/2018.
//

#ifndef ALC_CA3_HUFFTREE_H
#define ALC_CA3_HUFFTREE_H

#include "Node.h"
#include "HuffLeaf.h"
#include <queue> // std::priority_queue
#include <map> // std::map

class HuffTree {
public:
//    bool struct Compare;
    Node *merge_nodes(Node *a, Node *b);

    Node *encode(std::map<char, float> &m);
//    typedef std::priority_queue<Node*,std::vector<Node*>>;
};


#endif //ALC_CA3_HUFFTREE_H
