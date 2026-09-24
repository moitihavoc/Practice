#ifndef HASHSET_H

#define HASHSET_H
/*
 Implementation of hashset of integers in C
 A hashset is a hashtable that does not allow duplicates
 Functions implemented:
    difference
    union
    add
    remove
    intersect
*/

// define the functions, classes and variables

typedef struct Node {
    int value;
    Node *next;
} Node;

void add(Node *set, int n);

void remove(Node *set, int idx);

Node *diff(Node *set1, Node *set2);

Node *uni(Node *set1, Node *set2);

#endif
