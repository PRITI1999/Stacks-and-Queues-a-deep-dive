using namespace std;
#include<iostream>
#include<stdlib.h>
#include"queue_ll.h"

int main()
{
	int choice, ele, del_element;
	while(1)
	{
		cout<<"\n1.Insert an element \n2.Delete an element \n3.Display the elements of the stack\n4.Exit\nEnter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the element to be inserted\n";
				cin>>ele;
				enqueue(ele);
				break;
			case 2:
				del_element = dequeue();
				if(del_element != -1)
				{
					cout<<"Out of my queue: "<<del_element<<endl;
				}
				else
				{
					cout<<"Stack Underflow\n";
				}
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
