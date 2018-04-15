#include"stdio.h"
#include"conio.h"
int stack[5];
int capacity=5;
int size=-1;
void push()
{
	int ele;
	if(capacity-1==size)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter the element\n");
		scanf("%d",&ele);
		size++;
		stack[size]=ele;
		printf("element added successfully\n");
	}
}
void pop()
{
	if(size<=-1)
	{
		printf("underflow\n");
	}
	else
	{
		printf("the deleted element id %d",stack[size]);
		size--;
	}
}
void display()
{
	int i;
	if(size==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=size;i>=0;i--)
		printf("%d ",stack[i]);
	}
}
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(1);
				break;
		}
	 }
}