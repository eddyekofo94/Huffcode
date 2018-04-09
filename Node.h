//
// Created by Eddy Ekofo on 09/04/2018.
//

#ifndef ALC_CA3_NODE_H
#define ALC_CA3_NODE_H


class Node {
public:
    Node *left, *right;
     float weight;

    Node();
    explicit Node(float weight, Node *left, Node *right);

    ~Node();
};


#endif //ALC_CA3_NODE_H
