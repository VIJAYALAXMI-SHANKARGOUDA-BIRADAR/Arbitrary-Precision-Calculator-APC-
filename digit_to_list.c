#include <stddef.h>
#include "apc.h"

int digit_to_list(Dlist **head1,Dlist** tail1,Dlist **head2,Dlist **tail2,char *argv[])
{
    int i=0;
    char *str1 = argv[1];
    char *str2 = argv[3];

    while(str1[i] != '\0')
    {
    int data1 = str1[i] -'0';

    dl_insert_last(head1,tail1,data1);

    i++;
    }

int j=0;

while(str2[j] != '\0')
{ 
    int  data2 = str2[j] - '0';
     dl_insert_last(head2,tail2,data2);

    j++;
}


}












