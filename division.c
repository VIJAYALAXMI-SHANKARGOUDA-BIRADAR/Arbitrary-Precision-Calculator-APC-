#include<stdio.h>
#include "apc.h"
int division(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2, Dlist **headR, Dlist **tailR)
{
    int count = 0;

    /* Compare the two numbers */
    int ret = list_length(*head1, *head2);

    if (ret == 0)
    {
        printf("Division of two number is 0\n");
        return 0;
    }

    if (ret == 2)
    {
        printf("Division of two number is 1\n");
        return 0;
    }

    while (1)
    {
        int result = subtraction(head1, tail1, head2, tail2, headR, tailR);

        if (result == -1)
        {
            break;
        }

        count++;

        delete_list(head1, tail1);
        *head1 = *headR;
        *tail1 = *tailR;

        *headR = NULL;
        *tailR = NULL;

        delete_zero(head1, tail1);

        ret = list_length(*head1, *head2);

        if (ret == 0)   
            break;

        if (ret == 2)   
        {
            count++;   
            break;
        }
    }

    printf("Division of two number is %d\n", count);
    return 0;
}
