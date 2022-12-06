#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL,*ptr=NULL,*new;


void main()
{
int n,i;
printf("enter the number of nodes:");
scanf("%d",&n);


for(i=0;i<n;i++)
{
new=(struct node*)malloc(sizeof(struct node));
printf("\nenter the element:");
scanf("%d",&new->data);
new->next=NULL;

	if(head==NULL)
	{
	head=new;
	}
	else
	{
	ptr=head;
	
	while(ptr->next !=NULL)
	{
	ptr=ptr->next;
	}
ptr->next=new;
}
}
printf("\n the list is:\t");
ptr=head;

while(ptr !=NULL)
	{
	printf("%d",ptr->data);
	ptr=ptr->next;
	}
}







