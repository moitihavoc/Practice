#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node_t;

void printList(node_t *head) {
    // print all items in a list
    if (head == NULL)
        return;

    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
}

void push_last(node_t *head, int val) {
    // push an item to the last position of a list

    node_t *new = (node_t *)malloc(sizeof(node_t));
    new->next = NULL;
    new->val = val;

    while (head->next != NULL) {
        head = head->next;
    }

    head = new;
}
