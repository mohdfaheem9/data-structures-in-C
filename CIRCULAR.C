#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *link;
}*last;
void create()
{
	struct node *temp;
	if(last!=NULL)
	{
		printf("node is already created\n");
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&temp->data);
		temp->link=temp;
		last=temp;
	}
}
void addatbegin()
{
	struct node *temp;
	if(last==NULL)
	{
		create();
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&temp->data);
		temp->link=last->link;
		last->link=temp;
	}
}
void display()
{
	struct node *temp;
	if(last==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
	       temp=last->link;
	       while(temp!=last)
	       {
			printf("%d",temp->data);
			temp=temp->link;
	       }
	       printf("%d",last->data);
	}

 }
int len()
{
	int count=0;
	struct node *temp;
	if(last==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=last->link;
		while(temp!=last)
		{
			count++;
			temp=temp->link;
		}
		return count+1;
	}
	return 0;
}
void addafterpos()
{
	struct node *temp,*q;
	int pos,i=1;
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos>len())
	{
		printf("invalid\n");
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data to be added after\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		q=last->link;
		while(pos>i)
		{
			q=q->link;
			i++;
		}
		temp->link=q->link;
		q->link=temp;
	}
}
void del()
{
	struct node *temp,*q;
	int ele;
	if(last==NULL)
	{
		printf("mo list present\n");
	}
	else
	{
		printf("enter the node data to be deleted\n");
		scanf("%d",&ele);
		temp=last->link;
		if(last->data==ele)
		{
			while(temp->link!=last)
			{
				temp=temp->link;
			}
			temp->link=last->link;
			last->link=NULL;
			free(last);
			last=temp;
			printf("node deleted successfully\n");
		}
		else if(temp->data==ele)
		{
			last->link=temp->link;
			temp->link=NULL;
			free(temp);
			printf("node deleted\n");
		}
		else
		{
			q=temp->link;
			while(temp->link!=last)
			{
				if(q->data==ele)
				{
					temp->link=q->link;
					q->link=NULL;
					free(q);
					printf("node deleted\n");
				}
				else
				{
					temp=temp->link;
					q=temp->link;
				}
			}
		}

	}

}
void main()
{
	 int ch,length;
	 clrscr();
	 printf("the circular linked list is\n");
	 while(1)
	 {
		printf("1.create\n2.add at begin\n3.display\n4.lenght\n5add after the position\n6 delete\n7.exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
	 switch(ch)
	 {
		case 1: create();
			break;
		case 2:addatbegin();
			break;
		case 3:display();
			break;
		case 4:length=len();
			printf("%d\n",length);
			break;
		case 5: addafterpos();
			break;
		case 6:del();
			break;
		case 7:exit(1);
			break;
	 }
	 }
}

