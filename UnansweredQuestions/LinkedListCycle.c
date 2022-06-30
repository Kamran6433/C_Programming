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

main() {

    // This is a declaration of a pointer which is a pointer to a struct node.
    // This structure can access the data as well as the link part of the node.
    struct Node *head = NULL;
    // Here the memory has been allocated for data and *link and the address is stores in head.
    // You can avoid (struct Node *) but it is good practice to keep it in.
    head = (struct Node *)malloc(sizeof(struct Node));

    // This is the other way to create a node.
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;
    return 0;

}