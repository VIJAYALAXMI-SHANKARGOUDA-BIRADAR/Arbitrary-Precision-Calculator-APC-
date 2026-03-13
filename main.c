/*
NAME : VIJAYALAXMI SHANKARGOUDA BIRADAR
DATE : 19/11/2025 
PROJECT : ARBITRARY PRECISION CALCULATOR(APC)
*/



#include<stdio.h>
#include "apc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Help msg : <num1> <opr> <num2>\n");
		return 0;
	}

	Dlist *head1 = NULL, *tail1 = NULL;
	Dlist *head2 = NULL, *tail2 = NULL;
	Dlist *headR = NULL, *tailR = NULL;
	int result;
	char operator = argv[2][0];
	int neg = 0;
	int cmp;

	switch (operator)
	{
case '+':
		digit_to_list(&head1, &tail1, &head2, &tail2, argv);
		result = addition(&head1, &tail1, &head2, &tail2, &headR, &tailR);
		if (result == -1)
		{
			printf("ERROR: Addition function failed\n");
		}
		else
		{
			printf("List 1: ");
			print_list(head1, '1');
			printf("List 2: ");
			print_list(head2, '2');
			printf("List R: ");
			print_list(headR, 'R');
			printf("\n");
		}
		break;
	case '-':
		digit_to_list(&head1, &tail1, &head2, &tail2, argv);
		cmp = list_length(head1, head2);
		if (cmp == 0)
		{
			Dlist *temp_head = head1, *temp_tail = tail1;
			head1 = head2;
			tail1 = tail2;
			head2 = temp_head;
			tail2 = temp_tail;
			neg = 1;
		}
		result = subtraction(&head1, &tail1, &head2, &tail2, &headR, &tailR);
		if (result == -1)
		{
			printf("ERROR: Subtraction function failed\n");
		}
		else
		{
			printf("List 1: ");
			print_list(head1, '1');
			printf("List 2: ");
			print_list(head2, '2');
			printf("List R: ");
			//print_list(headR, 'R');

			if (neg)
				printf("-");
			print_list(headR, 'R');
		}
		break;
	//case '*':
	case 'x':
		digit_to_list(&head1, &tail1, &head2, &tail2, argv);
		result = multiplication(&head1, &tail1, &head2, &tail2, &headR, &tailR);
		if (result == -1)
		{
			printf("ERROR: Multiplication function failed\n");
		}
		else
		{
			printf("List 1: ");
			print_list(head1, '1');
			printf("List 2: ");
			print_list(head2, '2');
			print_list(headR, 'R');
		}
		break;
	case '/':
		digit_to_list(&head1, &tail1, &head2, &tail2, argv);
		    printf("List 1: ");
			print_list(head1, '1');
			printf("List 2: ");
			print_list(head2, '2');

		result = division(&head1, &tail1, &head2, &tail2, &headR, &tailR);
		if (result == -1)
		{
			printf("ERROR: Division function failed\n");
		}
		else
		 {
		// 	print_list(headR, 'R');
		    
		 }
		break;
	default:
		printf("Invalid Input:-( Try again...\n");
	}
	return 0;
}
