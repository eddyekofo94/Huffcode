//
// Created by Eddy Ekofo on 09/04/2018.
//

#include "Node.h"


Node::~Node() = default;

//Node::Node(int dataIn) : left(nullptr), right(nullptr), weight(nullptr) {}

Node::Node() = default;

Node::Node(float weight, Node *left, Node *right): left(nullptr), right(nullptr), weight(nullptr)  {}
