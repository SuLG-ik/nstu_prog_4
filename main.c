#include <stdio.h>
#include <stdlib.h>

#include "my_queue.h"


void dequeue_with_print(Item** head)
{
    Laptop* laptop = dequeue(head);
    print_laptop(*laptop);
    free(laptop);
}

int main()
{
    Item* head = NULL;
    enqueue(Init("Asus", "Intel", 0), &head);
    enqueue(Init("Aeer", "Intel", 0), &head);
    enqueue(Init("Lenovo", "AMD", 1), &head);
    enqueue(Init("Macbook", "M2", 0), &head);
    enqueue(Init("Compucter", "CPU", 1), &head);
    dequeue_with_print(&head);
    dequeue_with_print(&head);
    dequeue_with_print(&head);
    DeleteAll(&head);
    return 0;
}
