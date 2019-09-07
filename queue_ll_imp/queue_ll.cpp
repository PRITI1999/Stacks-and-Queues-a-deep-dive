#include<iostream>
using namespace std;

struct q_node
{
	int data;
	q_node *next;
}*front, *rear;

void enqueue(int ele)
{
	q_node *temp = new q_node;
	temp -> data = ele;
	temp -> next = NULL;
	if(front == NULL)
	{
		front = rear = temp;
	}
	else
	{
		rear -> next = temp;
		rear = temp;
	}
}

int dequeue()
{
	if(front != NULL)
	{
		int del_ele = front -> data;
		q_node *temp = front;
		front = front -> next;
		delete(temp);
		return del_ele;
	}
	else
	{
		return -1;
	}
}

void display()
{
	if(front != NULL)
	{
		q_node *temp = front;
		cout<<"Queue:"<<endl;
		while(temp != NULL)
		{
			cout<<temp->data<<"-->";
			temp = temp -> next;
		}
		cout<<"NULL"<<endl;
	}
	else
	{
		cout<<"Nothing to display"<<endl;
	}
}

