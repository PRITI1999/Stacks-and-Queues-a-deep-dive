#include<stdio.h>
#include"temp_stack.h"
#define MAX 10

int top = -1;
int stack_array[MAX];

void push(int ele)
{
	if(top != MAX - 1)
	{
		++top;
		stack_array[top] = ele;
	}
	else
	{
		printf("Stack Overflow \n");
	}
}

int pop()
{
	if(top != -1)
	{
		return stack_array[top--];
	}
	else
	{
		return -1;
	}
}

int peek()
{
	if(top != -1)
	{
		return stack_array[top];
	}
	else
	{
		return -1;
	}
}

void display()
{
	if(top != -1)
	{
		int i;
		printf("My stack contains : \n");
		for(i = 0; i <= top; ++i)
		{
			printf("%d\t", stack_array[i]);
		}
		printf("\n");
	}
	else
	{
		printf("Nothing to display\n");
	}
} 
