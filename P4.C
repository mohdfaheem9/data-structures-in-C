#include<stdio.h>
#include<conio.h>
#define capacity 5
int queue[capacity];
int rear=0;
int front=0;
void insert()
{
	int ele;
	if(rear==capacity-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter the element\n");
		scanf("%d",&ele);
		queue[rear]=ele;
		rear++;
		printf("element added successfully\n");
	}
}
void del()
{
	int i;
	if(front==rear)
	{
		printf("underflow\n");
	}
	else
	{
		printf("the element deleted is %d",queue[front]);
		for(i=0;i<rear;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void display()
{
	int i;
	if(front==rear)
	{
		printf("queue is empty\n");
	}
	else
	for(i=0;i<rear;i++)
	{
		printf("%d",queue[i]);
	}
}


void main()
{
	while(1)
	{
		int ch;
		printf("1.insert\n2.delete\n3.diplay\n4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
				break;
			case 2:del();
				break;
			case 3:display();
				break;
			case 4:exit(0);
		}
	}

}