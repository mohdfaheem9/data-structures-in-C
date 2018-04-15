#include<stdio.h>
#include<malloc.h>


struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node* start=NULL;
void createdll()
{
	struct node *temp;
	if(start!=NULL)
	{
		printf("double link list is already created\n");
		return;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the node data\n");
		scanf("%d",&temp->data);
		temp->prev=NULL;
		temp->next=NULL;
		start=temp;
	printf("double linked list evaluted\n");
}
}
void addbegin()
	{
	struct node * temp;
	if(start==NULL)
	{
		printf("double linked list is not available create first\n");
	}
	else
	{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data\n");
	scanf("%d",&temp->data);
	temp->next=start;
	start->prev=temp;
	temp->prev=NULL;
	start=temp;
	printf("node added in beginnig\n");
	}
}
void display()
{
	struct node *temp;
	if(start==NULL)
	{
	printf("list is empty\n");
	}
	else
	{
	printf(" dubly node is \n");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("%d ",temp->data);
	}
	}
	}
int length()
{
	int size=0;
	struct node*temp;
	if(start==NULL)
	{
		printf("list empty\n");
	return 0;
	}
	else
	{
	temp=start;
	while(temp!=NULL)
	{
		size++;
		temp=temp->next;
	}
	return size;
 }
 }
 void rdisplay()
 {
	 struct node* temp;
	 if(start==NULL)
	 {
		 printf("list is empty\n");
	 }
	 else
	 {
		printf("the double linked list contains\n");
		temp=start ;
		while(temp->next!=NULL)
		{
		 temp=temp->next;
		 }
		 while(temp!=NULL)
		 {
		 printf("%d",temp->data);
		 temp=temp->prev;
		 }
			printf("\n");
}
}
void addpos()
{
	int pos,i,len;
	struct node *temp,*t,*u;
	printf("enter position\n");
	scanf("%d",&pos);
	len=length();
	if(pos>len)
	printf("invalid pos");
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("enter node data\n");
		scanf("%d",&temp->data);
		t=start;u=start;
		for(i=0;i<pos-1;i++)
		{
			t=t->next;
		 }
		 for(i=0;i<pos;i++)
		 {
		 u=u->next;
		 }
		 temp->prev=t;
		 temp->next=t->next;
		 t->next=temp;
		 u->prev=temp;
		  }
}



void main()
{
int ch,len;
clrscr();
printf("\n dubly lined list\n\n");
while(1)
{
	printf("1.create\n");
	printf("2.node add at begin\n");
	printf("3.display\n");
	printf("4.length\n");
	printf("5.display in reverse\n");
	printf("6.add at specified position\n");
	printf("7.to barkhas\n");
	printf("enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	      case 1:
				createdll();
				break;
	      case 2:
				addbegin();
				break;
	      case 3:
				display();
				break;
	      case 4:
				len=length();
				printf("the double linked list is %d\n",len);
				break;
	      case 5:
				rdisplay();
				break;
	      case 6:
				addpos();
				break;
	      case 7:
		    printf("credits:thank uh akhil sir\n");

		     exit(1);
		    break;




		}
}


      }

