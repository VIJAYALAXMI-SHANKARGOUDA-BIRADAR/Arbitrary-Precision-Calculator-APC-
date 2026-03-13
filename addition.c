#include<stdio.h>
#include "apc.h"

int addition(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */

	Dlist *temp1,*temp2;

	int carry=0;
	int data;

	temp1 = *tail1;
	temp2 = *tail2;

	while(temp1 !=NULL || temp2 !=NULL)
	{
		if(temp1!=NULL && temp2 !=NULL)
		{
			
			data =temp1->data +temp2->data +carry;
			if(data>9)
			{
				carry = 1;
				data =data % 10;
			}
			else
			{
				carry = 0;		
			
			}
			dl_insert_first(headR,tailR,data);
			temp1 = temp1->prev;
			temp2 = temp2->prev;
			
		}

		else if(temp1 !=NULL && temp2 == NULL)
		{
			data = temp1->data + carry;

			if(data>9)
			{
				carry = 1;
				data =data % 10;
			}
			else
			{
				
				carry = 0;
			
			}
			dl_insert_first(headR,tailR,data);
			temp1 = temp1->prev;

		}

		else if(temp1 == NULL && temp2 != NULL)
		{
			data = temp2->data + carry;

			if(data>9)
			{
				carry = 1;
				data =data % 10;
			}
			else
			{
				carry =0;			
				
			}
			dl_insert_first(headR,tailR,data);
			temp2 = temp2->prev;
		}

		
	}
	/*if(carry == 1)
	{
		dl_insert_first(headR,tailR,data);
	}*/

	if(carry ==1)
	{
		dl_insert_first(headR,tailR,carry);
		carry = 0;
	}

	return SUCCESS;
}
