//
// Created by Володя on 27.02.2024.
//

#include "my_queue.h"

#include <stdlib.h>

void enqueue(Laptop *value, Queue **head) {
    Item *newItem = malloc(sizeof(Item));
    newItem->value = value;
    if (*head == NULL) {
        newItem->next = newItem->prev = NULL;
        (*head) = malloc(sizeof(Queue));
        (*head)->start = newItem;
        (*head)->end = newItem;
        return;
    }
    (*head)->start->prev = newItem;
    newItem->next = (*head)->start;
    newItem->prev = NULL;
    (*head)->start = newItem;
}

Laptop *dequeue(Queue **head) {
    if (*head == NULL)
        return NULL;
    Item *item = (*head)->end;
    item->prev->next = NULL;
    (*head)->end = item->prev;
    Laptop *laptop = item->value;
    free(item);
    return laptop;
}

void DeleteAll(Queue **head) {
    Item *q = (*head)->start;
    (*head)->end = NULL;
    while (q != NULL) {
        (*head)->start = q;
        q = (*head)->start->next;
        free(*head);
    }
    (*head) = NULL;
}
