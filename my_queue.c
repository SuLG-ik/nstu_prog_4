//
// Created by Володя on 27.02.2024.
//

#include "my_queue.h"

#include <stdlib.h>

void enqueue(Laptop* value, Item** head)
{
    Item* newItem = malloc(sizeof(Item));
    newItem->value = value;
    if (*head == NULL)
    {
        newItem->next = newItem->prev = NULL;
        (*head) = newItem;
        return;
    }
    (*head)->prev = newItem;
    newItem->next = (*head);
    newItem->prev = NULL;
    (*head) = newItem;
}

Laptop* dequeue(Item** head)
{
    if (*head == NULL)
        return NULL;
    Item* q = *head;
    while (1)
    {
        if (q->next == NULL)
        {
            Laptop* laptop = q->value;
            if (q->prev != NULL)
                q->prev->next = NULL;
            free(q);
            return laptop;
        }
        q = (q)->next;
    }
}

void DeleteAll(Item** head)
{
    Item* q = *head;
    while (q != NULL)
    {
        (*head) = q;
        q = (*head)->next;
        free(*head);
    }
}
