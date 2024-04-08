//
// Created by Володя on 27.02.2024.
//

#ifndef MY_LIST_H
#define MY_LIST_H

#include "item.h"

typedef struct Queue {
    Item *start, *end;
} Queue;

void enqueue(Laptop *value, Queue **head);

Laptop *dequeue(Queue **head);

void DeleteAll(Queue **head);


#endif //MY_LIST_H
