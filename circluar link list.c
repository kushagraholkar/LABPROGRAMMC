#include<stdio.h>

struct node
{
	int data;				//	4 bytes
	struct node *add;		// 	4 bytes
};
struct node *start=NULL,*temp=NULL,*New=NULL,*prev=NULL,*next=NULL;

void create();				// declaration of function
void insert();				// declaration of function
void Delete();				// declaration of function
void display();				// declaration of function

void main()
{
	int ch;
	do
	{
		printf("\n--------Circular Link List--------\n");
		printf("Press 1 for Create Operation \n");
		printf("Press 2 for Insert Operation \n");
		printf("Press 3 for Delete Operation \n");
		printf("Press 4 for Display Operation \n");
		printf("Press 5 for Exit \n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);	
		switch(ch)
		{
			case 1 : create();break;
			case 2 : insert();break;
			case 3 : Delete();break;
			case 4 : display();break;
			case 5 : break;
			default: printf("\nInvalid Choice, Please try again\n");break;
		}
	}
	while(ch!=5);
}
void create()					// Definition of function
{
	int n;
	char ch;
	
	if(start==NULL)
	{
		printf("Enter a value: ");
		scanf("%d",&n);
		
		start = (struct node *) malloc(sizeof(struct node));		// start = 2011
		start->data = n;											// 
		start->add = start;											// temp = 1011
		temp = start;
		printf("To add another element, press 'Y': ");
		scanf(" %c",&ch);
		while(ch=='Y' || ch=='y')
		{
			printf("Enter next value: ");
			scanf("%d",&n);
			New = (struct node *) malloc(sizeof(struct node));		// New = 1234
			New->data = n;
			New->add = start;
			temp->add = New;
			temp = New;
			printf("To add another element, press 'Y': ");
			scanf(" %c",&ch);		
		}
	}
	else
	{
		printf("\nList Already created, use insert delete or display operation\n");
	}
}

void insert()					// Definition of function
{
	int n,position,count=0,i=1;
	if(start==NULL)
	{
		printf("\nList Not created, create a list first\n");
	}
	else
	{
		printf("\nEnter a Value: ");
		scanf("%d",&n);
		New = (struct node *) malloc(sizeof(struct node));
		New->data = n;
		New->add = start;
		printf("\nEnter a Position for node insertion: ");
		scanf("%d",&position);
		if(position==1)
		{
			temp = start;
			while(temp->add!=start)
			{
				temp = temp->add;			// temp = 1111
			}
			temp->add = New;
			New->add = start;
			start = New; 
		}
		else
		{
			temp = start;
			do
			{
				count++;					// count = 4
				temp = temp->add;
			}
			while(temp!=start);
			if(position>count+1 || position<1)
			{
				printf("\nInvalid Position, it should be between 1 to %d",count+1);
			}
			else if(position==count+1)
			{
				temp = start;
				while(temp->add!=start)
				{
					temp = temp->add;
				}
				temp->add = New;
			}
			else
			{
				next = start;
				while(i<position)
				{
					prev = next;
					next = next->add;
					i++;
				}
				prev->add = New;
				New->add = next;
			}
		}
	}
}
void Delete()					// Definition of function
{
	int position,count=0,i=1;
	if(start==NULL)
	{
		printf("\nList Not created, create a list first\n");
	}
	else
	{
		printf("\nEnter a position for node deletion: ");
		scanf("%d",&position);
		if(position==1)
		{
			temp = start;
			while(temp->add!=start)
			{
				temp = temp->add;
			}
			temp->add = start->add;
			
			temp = start;
			start = start->add;
			printf("\nDeleted Element = %d\n",temp->data);
			free(temp);
			
			/*
			
			temp = start;
			while(temp->add!=start)
			{
				temp = temp->add;								// temp = 1111
			}
			printf("\nDeleted Element = %d\n",start->data);
			temp->add = start->add;
			free(start);
			start = temp->add;
			
			*/
		}
		else
		{
			temp = start;
			do
			{
				temp=temp->add;
				count++;
			}
			while(temp!=start);
			if(position>count || position<1)
			{
				printf("\nInvalid Position, it should be between 1 to %d\n",count);
			}
			else if(position==count)
			{
				next = start;
				do
				{
					prev = next;
					next = next->add;
				}
				while(next->add!=start);
				printf("\nDeleted Element = %d\n",next->data);
				free(next);
				prev->add = start;
			}	
			else
			{
				next = start;
				while(i<position)				// position = 3
				{
					prev = next;				// prev = 1011
					next = next->add;			// next = 1234
					i++;						// i = 3
				}	
				prev->add = next->add;
				printf("\nDeleted Element = %d\n",next->data);
				free(next);
			}		
		}
	}	
}
void display()					// Definition of function
{
	if(start==NULL)
	{
		printf("\nList Not created, create a list first\n");
	}
	else
	{
		printf("\nThe List Contains:  ");
		temp = start;
		do
		{
			printf("%d  ",temp->data);
			temp = temp->add;							// temp = 2011
		}
		while(temp!=start);
		printf("\n");
	}
}
