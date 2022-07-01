#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct Node {
 *     data_type data;
 *     data_type data;
 *          .
 *          .
 *     There can only be ONE pointer but any amounts of data.
 *     struct Node *link;
 * };
 */

struct Node {
    int data;
    struct Node *link;
};

int main() {

    // This is a declaration of a pointer which is a pointer to a struct node.
    // This structure can access the data as well as the link part of the node.
    // Here the memory has been allocated for data and *link and the address is stores in head.
    // You can avoid (struct Node *) but it is good practice to keep it in.

    // This is the other way to create a node.
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;

    struct Node *current = malloc(sizeof(struct Node));
    current->data = 98;
    current->link = NULL;
    // This is the crucial part of the linked list.
    // This line of code links the link of the head node to the address of the current node
    // making head accessible to current in this singlely linked list. 
    head->link = current;

    // There is an issue with this method.
    // What if we had to make 20 nodes? this method isn't efficient.
    struct Node *current2 = malloc(sizeof(struct Node));
    current2->data = 3;
    current2->link = NULL;
    current->link = current2;
    return 0;
    
}