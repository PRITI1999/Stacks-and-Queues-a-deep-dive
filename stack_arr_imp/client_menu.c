#include<stdio.h>
#include<stdlib.h>
#include"temp_stack.h"

void main()
{
	int choice, ele, pop_element, peek_element;
	while(1)
	{
		printf("\n1.Push an element \n2.Pop an element \n3.Get the top element\n4.Display the elements of the stack\n5.Exit\nEnter your choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed\n");
				scanf("%d", &ele);
				push(ele);
				break;
			case 2:
				pop_element = pop();
				if(pop_element != -1)
				{
					printf("Out of my stack %d\n", pop_element);
				}
				else
				{
					printf("Stack Underflow\n");
				}
				break;
			case 3:
				peek_element = peek();
				if(peek_element != -1)
				{
					printf("Peek element %d\n", peek_element);
				}
				else
				{
					printf("Stack underflow\n");
				}
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
		}
	}
}
