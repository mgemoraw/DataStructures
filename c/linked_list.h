#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct Node {
    int data;
    struct Node *next;
} Node;


void insert(Node *head, int data);
void print_list(Node*head);

#endif
