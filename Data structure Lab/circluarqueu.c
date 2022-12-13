#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int front=-1,rear=-1,item,a[10],size=10,temp,choice;
void main()
{
int opt;
do
{
printf("\n enter your choice \n 1.insert \n 2.delete \n 3.display \n 4.exit ");
scanf("%d",&opt);
switch(opt)
{
case 1:
      insert();
      break;
case 2:
      delete();
      break;
case 3:
      display();
      break;
case 4:exit(0);
      break;
default:printf("invalid entry");
}
}
while(choice!=4);
}
void insert()
{
if(front==(rear+1)%size)
{
printf("queue is full");
}
else
{
printf("enter the item");
scanf("%d",&item);
}
if(front==-1 && rear==-1)
{
front=0,rear=0;
a[rear]=item;
}
else
{ 
rear=(rear+1)%size;
a[rear]=item;
}
}
void delete()
{
if(front==-1)
{
printf("no elements to delete");
}
else if(front==rear)
{
printf("enter the element to delete is %d",a[front]);
front=rear=-1;
}
else
{
printf("enter the element to delete is %d",a[front]);
front=(front+1)%size;
}
}
void display()
{
int temp;
temp=front;
if(temp==-1 && rear==-1)
{
printf("no elements");
}
else
{
printf("queue elements");
while(temp<=rear)
{
printf("%d",a[temp]);
temp=(temp+1)%  size;
}
}
}
