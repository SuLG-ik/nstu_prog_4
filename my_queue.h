//
// Created by Володя on 27.02.2024.
//

#ifndef MY_LIST_H
#define MY_LIST_H
#include "Laptop.h"

typedef struct Item {
    Laptop* value;
    struct Item* next;
    struct Item* prev;
} Item;

void enqueue(Laptop* value, Item** head);

Laptop* dequeue(Item** head);

void DeleteAll(Item** head);


#endif //MY_LIST_H
