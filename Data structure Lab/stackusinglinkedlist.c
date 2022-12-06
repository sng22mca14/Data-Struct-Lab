#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;


void push()
{
struct node *new=NULL;
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&new->data);
new->next=top;
top=new;
}


void pop()
{
	struct node *ptr;
	if(top==NULL)

	printf("\nstack underflow");
	else{
		printf("\nthe item poped is:%d",top->data);
		ptr=top;
		top=top->next;
		free(ptr);
		}
}

void display()
{
	struct node *ptr;
	if(top==NULL)
		printf("\nstack underflow");
	else{
		ptr=top;
		while(ptr!=NULL){
			printf("\n%d",ptr->data);
			ptr=ptr->next;
			}
		}
}


void main()
{
	int opt;
	do{
		printf("\nenter your opstions... \n1.PUSH\n2.POP\n3.display\n4.EXIT\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			}
	}while(opt !=4); 
}




