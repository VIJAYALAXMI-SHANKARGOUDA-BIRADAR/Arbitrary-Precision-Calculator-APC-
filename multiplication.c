#include<stdio.h>
#include "apc.h"

int multiplication(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
    *headR = NULL;
    *tailR = NULL;
    Dlist *temp2 = *tail2;
    int shift = 0;
    while (temp2 != NULL)
    {
        Dlist *headP = NULL, *tailP = NULL;
        int carry = 0;
        Dlist *temp1 = *tail1;
        while (temp1 != NULL)
        {
            int prod = temp1->data * temp2->data + carry;
            carry = prod / 10;
            prod %= 10;
            dl_insert_first(&headP, &tailP, prod);
            temp1 = temp1->prev;
        }
        if (carry > 0)
        {
            dl_insert_first(&headP, &tailP, carry);
        }
        for (int i = 0; i < shift; i++)
        {
            dl_insert_last(&headP, &tailP, 0);
        }
        addition(headR, tailR, &headP, &tailP, headR, tailR);
        temp2 = temp2->prev;
        shift++;
    }
    return SUCCESS;
}
