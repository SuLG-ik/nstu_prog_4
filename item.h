//
// Created by Володя on 08.04.2024.
//

#ifndef INC_3_ITEM_H
#define INC_3_ITEM_H

#include "Laptop.h"

typedef struct Item {
    Laptop *value;
    struct Item *next;
    struct Item *prev;
} Item;

#endif //INC_3_ITEM_H
