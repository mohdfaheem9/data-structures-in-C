#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
struct node
{
	int queue[CAPACITY];
	int front;
	int rear;
}q;
void insert(struct node *q)
{
	int ele;
	if(q->rear==CAPACITY-1)
	printf("overflow");
	else
	{
		printf("enter the element\n");
		scanf("%d",&ele);
		q->queue[q->rear]=ele;
		q->rear++;
		printf("element added\n");
	}
}
void del(struct node *q)
{
	int i;
	if(q->front==q->rear)
	printf("underflow");
	else
		{
			printf("%d is deleted",q->queue[q->front]);
			for(i=0;i<q->rear;i++)
			{       printf("infor\n");
				q->queue[i]=q->queue[i+1];
			}
			q->rear--;
		}
}
void display(struct node *q)
{
	int i;
	if(q->front==q->rear)
	printf("queue is empty\n");
	else
	{
		for(i=0;i<q->rear;i++)
		printf("%d",q->queue[i]);

	}
}
void main()
{
	int ch;
	q.rear=q.front=0;
	clrscr();
	while(1)
	{
		printf("1.insert\n2.delete\n3.display\n4.exit\n");
		printf("enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(&q);
				break;
			case 2:del(&q);
				break;
			case 3:display(&q);
				break;
			case 4:exit(0);
				break;
				default :
					printf("invalid choice");
		}
	}
}
