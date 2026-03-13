#ifndef APC_H
#define APC_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Dlist;

int digit_to_list(Dlist **head1, Dlist **tail1,
                  Dlist **head2, Dlist **tail2, char *argv[]);

int addition(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR);

int subtraction(Dlist **head1, Dlist **tail1,
                Dlist **head2, Dlist **tail2,
                Dlist **headR, Dlist **tailR);

int multiplication(Dlist **head1, Dlist **tail1,
                   Dlist **head2, Dlist **tail2,
                   Dlist **headR, Dlist **tailR);

int division(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR);

int dl_insert_first(Dlist **head, Dlist **tail, int data);
int dl_insert_last(Dlist **head, Dlist **tail, int data);

void print_list(Dlist *head, char label);

int delete_list(Dlist **head, Dlist **tail);
int delete_zero(Dlist **head, Dlist **tail);


int list_length(Dlist *head1, Dlist *head2);

#endif
