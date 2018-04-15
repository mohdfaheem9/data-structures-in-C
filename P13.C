#include<stdio.h>
#include<conio.h>
#include<process.h>
struct node
{
	struct node *left;
	int item;
	struct node *right;
};

int number,num,ch;
struct node *tree,*p,*q;
void create(struct node *p,int n)
{
	if(n>p->item)
	{
		if(p->right==NULL)
		{
			p->right=(struct node*)malloc(sizeof(struct node));
			p=p->right;
			p->left=NULL;
			p->right=NULL;
		}
		else
		{
			create(p->right,n);
		}
	}
	else if(n==p->item)
	{
		if(p->left==NULL)
		{
			p->left=(struct node*)malloc(sizeof(struct node));
			p=p->left;
			p->item=NULL;
			p->right=NULL;
		}
		else
		{
			create(p->left,n);
		}
	}
	printf("no is displicated\n");
	return;
}
void inorder(struct node *p)
{
	inorder(p->left);
	printf("%d\t",p->item);
	inorder(p->right);
	return;
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d",p->item);
		preorder(p->left);
		preorder(p->right);
	}
	return;
}
void postorder(struct node *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d",p->item);
	}
	return;
}
void main()
{
	int n;
	tree=(struct node*)malloc(sizeof(struct node));
	printf("input numbers\n");
	scanf("%d",&num);
	tree->item=num;
	tree->left=NULL;
	tree->right=NULL;
	while(scanf("%d",&num)!=rcreate(tree,num))
	do
	{
		printf("\n1.insert\n2.preorder\n3.postorder\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("inorder\n");
				inorder(tree);
				break;
			case 2:printf("preorder\n");
				preorder(tree);
				break;
			case 3:printf("postorder traversal\n");
				postorder(tree);
				break;
		}
	}while(ch!=4);
}
