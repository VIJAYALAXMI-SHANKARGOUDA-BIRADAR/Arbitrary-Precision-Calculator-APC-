#include<stdio.h>
#include "apc.h"

int subtraction(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */

	Dlist *temp1,*temp2;

	int borrow=0;
	int data;

	temp1 = *tail1;
	temp2 = *tail2;

	while(temp1 !=NULL || temp2 !=NULL)
	{
		if(temp1!=NULL && temp2 !=NULL)
		{
			
			data =temp1->data -temp2->data -borrow;
			if(data<0)
			{
				borrow = 1;
				data =data + 10;
			}
			else
			{
				borrow = 0;		
			
			}
			dl_insert_first(headR,tailR,data);
			temp1 = temp1->prev;
			temp2 = temp2->prev;
			
		}

		else if(temp1 !=NULL && temp2 == NULL)
		{
			data = temp1->data - borrow;

			if(data<0)
			{
				borrow = 1;
				data =data + 10;
			}
			else
			{
				
				borrow = 0;
			
			}
			dl_insert_first(headR,tailR,data);
			temp1 = temp1->prev;

		}

		else if(temp1 == NULL && temp2 != NULL)
		{
			data = temp2->data - borrow;

			if(data<0)
			{
				borrow = 1;
				data =data + 10;
			}
			else
			{
				borrow =0;			
				
			}
			dl_insert_first(headR,tailR,data);
			temp2 = temp2->prev;
		}

		
	}
	return SUCCESS;
}
