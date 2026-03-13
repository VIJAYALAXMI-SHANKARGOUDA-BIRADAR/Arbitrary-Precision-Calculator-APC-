#include<stdlib.h>

#include "apc.h"


int dl_insert_last(Dlist **head, Dlist **tail, int data)
{
    Dlist* new=malloc(sizeof(Dlist));
    
    if(new==NULL)
    {
        return -1;
    }
    
    new->prev=NULL;
    new->next=NULL;
    new->data=data;
    
    if(*head==NULL && *tail==NULL)
    {
        *head=new;
        *tail=new;
        return SUCCESS;
        
    }
    
    else
    {
        new->prev=*tail;
        (*tail)->next=new;
        *tail=new;
        return SUCCESS;
    }

}


int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    
    Dlist *new=malloc(sizeof(Dlist));
    
    if(new==NULL)
    {
        return FAILURE;
    }
    
     new->data = data;
    new->prev = NULL;
    new->next = NULL;
    
    if(*head==NULL && *tail==NULL)
    {
        *head=new;
        *tail=new;
        
        return SUCCESS;
        
    }
    
    else
    {
        new->next = *head;
        (*head)->prev = new;
        *head = new;
        return SUCCESS;
        
    }

}


int list_length(Dlist *head1, Dlist *head2)
{
    int len1 = 0, len2 = 0;

    Dlist *temp1 = head1;
    while (temp1)
    {
        len1++;
        temp1 = temp1->next;
    }

    Dlist *temp2 = head2;
    while (temp2)
    {
        len2++;
        temp2 = temp2->next;
    }

    if (len1 < len2)
        return 0;
    else if (len1 > len2)
        return 1;
    else    
    {
        temp1 = head1;
        temp2 = head2;

        while (temp1 && temp2)
        {
            if (temp1->data < temp2->data) return 0;
            if (temp1->data > temp2->data) return 1;

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return 2; // equal
    }
}

int delete_list(Dlist **head, Dlist **tail)
{
    Dlist *temp = *head;
    Dlist *next;

    while (temp) {
        next = temp->next;
        free(temp);
        temp = next;
    }

    *head = NULL;
    *tail = NULL;

    return SUCCESS;
}

int delete_zero(Dlist **head, Dlist **tail)
{
    while (*head && (*head)->data == 0) {
        Dlist *temp = *head;
        *head = (*head)->next;

        if (*head)
            (*head)->prev = NULL;

        free(temp);
    }

    if (*head == NULL)
        *tail = NULL;

    return SUCCESS;
}


