#include<stdio.h>
#include "apc.h"

void print_list(Dlist *head, char label)
{
    printf("Head%c -> ", label);
    if(head == NULL)
    {
        printf("0");
    }
    else
    {
        Dlist *temp = head;
        while(temp)
        {
            printf("%d", temp->data);
            temp = temp->next;
            if(temp)
                printf(" -> ");
        }
    }
    printf(" <- Tail%c\n", label);
}
