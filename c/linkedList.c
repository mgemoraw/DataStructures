#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Node *head = NULL;

int main()
{

    Node *head = NULL;

    head = malloc(sizeof(Node));
    head->data = 3;
    head->next = NULL; // if not given NULL, gcc will assign garbage integer value to it resulting infinite loop when traversing the list

    insert(head, 5);
    insert(head, 6);
    insert(head, 8);
    print_list(head);

    return 0;
}

void print_list(Node *head)
{
    int counter = 0;
    if (head == NULL)
    {
        printf(".......... Empty List ............\n");
        return;
    }
    
    Node *temp = head;
    while (temp != NULL)
    {
        counter++;
        printf("Node[%d]: %d\n", counter, temp->data);
        temp = temp->next;
    }
}

void insert(Node *head, int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode = head;
        head = newNode;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

}