#include <stdio.h>
#define MAXSIZE 10000

typedef struct Node{
    float freq;
    int letter;
    struct Node *left, *right;
} Node;

Node* getMin(Node * array[MAXSIZE], int size);