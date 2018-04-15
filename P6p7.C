#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start;
void create()
{
	struct node *temp;
	if(start!=NULL)
	{
		printf("list is already present\n");
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&temp->data);
		start=temp;
		temp->link=NULL;
	}
}
void add()
{
	struct node *temp,*p;
	p=start;
	if(start==NULL)
	{
		printf("first create node");
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&temp->data);
		temp->link=NULL;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void display()
{
	struct node *temp;
	temp=start;
	if(temp==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}
void del()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=start->link;
		printf("the deleted node is %d",start->data);
		start->link=NULL;
		start=temp;
	}

}
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("1.create\n2.addition\n3.deletion\n4.display\n5.exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
				break;
			case 2:
				add();
				break;
			case 3:del();
				break;
			case 4:display();
				break;
			case 5:exit(1);
				break;
		}
	}
}