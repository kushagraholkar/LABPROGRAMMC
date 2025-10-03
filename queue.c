#include<stdio.h>
#define maxsize 10
int q[maxsize],rear=-1,front=0;
void enqueue();				// declaration of function
void dequeue();				// declaration of function
void display();				// declaration of function

void main()
{
	int ch;
	do
	{
		printf("\n-------------Queue-------------\n");
		printf("Press 1 for Insert Operation \n");
		printf("Press 2 for Delete Operation \n");
		printf("Press 3 for Display Operation \n");
		printf("Press 4 for Exit \n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);	
		switch(ch)
		{
			case 1 : enqueue();break;
			case 2 : dequeue();break;
			case 3 : display();break;
			case 4 : break;
			default: printf("\nInvalid Choice, Please try again\n");break;
		}
	}
	while(ch!=4);
}
void enqueue()					// Definition of function
{
	if(rear==maxsize-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		rear++;
		printf("\nEnter the value: ");
		scanf("%d",&q[rear]);
	}
}
void dequeue()					// Definition of function
{
	if(front>rear)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		printf("\nDeleted Element = %d\n ",q[front]);
		front++;
	}	
}
void display()				// Definition of function
{
	int i;
	if(front>rear)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		printf("\nThe Queue contains: ");
		for(i=front; i<=rear; i++)
		{
			printf("%d  ",q[i]);
		}
	}		
}
