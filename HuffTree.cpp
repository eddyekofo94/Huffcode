//
// Created by Eddy Ekofo on 09/04/2018.
//

#include "HuffTree.h"

struct Compare {
    bool operator()(Node *a, Node *b) {
        return a->weight > b->weight;
    }
};

//Node * merge_nodes(Node *a, Node *b)
//{
//    return new Node(a->weight + b->weight, a, b);
//}

// creates a priority queue of nodes
typedef std::priority_queue<Node *, std::vector<Node *>, Compare>
        huffPriorityQueue;

Node *HuffTree::merge_nodes(Node *a, Node *b) {
    return new Node(a->weight + b->weight, a, b);
}

Node *HuffTree::encode(std::map<char, float> &m) {
    huffPriorityQueue priorityQueue;
    Node *a, *b;
    // create a huff_leaf for each letter in the map
    // weighted by its associated weight, and put each leaf into
    // priority queue
    std::map<char, float>::iterator iterator;
    for (iterator = m.begin(); iterator != m.end(); iterator++
            ) {
        priorityQueue.push(new Huff_Leaf(iterator->first, iterator->second));
    }

    // create the tree
    while (priorityQueue.size() > 1) {
        a = priorityQueue.top();
        priorityQueue.pop();
        b = priorityQueue.top();
        priorityQueue.pop();
        priorityQueue.push(merge_nodes(a, b));
    }

}
