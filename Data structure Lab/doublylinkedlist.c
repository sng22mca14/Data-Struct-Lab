include<stdio.h>
#include<stdlib.h>
struct node{ 
  struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL,*new =NULL,*ptr;

void getNode(){
	new = (struct node*)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	new->prev=NULL;
	new->next=NULL;
}
void insert(){
    getNode();
	if (head == NULL){
			head=new;
}
else{
		ptr=head;
		while(ptr->next != NULL){
					ptr=ptr->next;	 		
		}
    ptr->next = new;
		new->prev = ptr;

	}
}

void display(){
	ptr = head;
	if(head == NULL){
		printf("list is Empty\n");
	}else{
		printf("The dlist elements:");
    while(ptr !=NULL){
			printf("%d",ptr->data);
			ptr=ptr->next;	
		}
			
	}
}

void insertb(){
		printf("\nEnter the element:");
	getNode();
	if (head == NULL){
			printf("list is Empty\n");
}
else{
		new->next = head;
		head->prev = new;
		head=new;
	}
}


void insertend(){
	printf("\nEnter the element:");
	insert();
}

void insertAtMid(){
	int loc,i;
struct node *temp;
	printf("\nEnter the key element:");
  scanf("%d",& loc);
	printf("\nEnter the element:");
  getNode();
	if (head == NULL){
			printf("list is Empty\n");
	}else{
	ptr=head;
		while(ptr->next != NULL && ptr->data != loc){
					ptr=ptr->next;	 		
		}
			if(ptr->next == NULL){
		ptr->next = new;
		new->prev = ptr;
			}else{
			ptr->next->prev= new;
			new->next=ptr->next;
			new->prev= ptr;
			ptr->next=new;  
							}
 		
	
	}
}

void deleteAtBegining(){
		if (head == NULL){
			printf("list is Empty\n");
		}
		else{
				ptr = head;
				ptr->next->prev=NULL;
				head=ptr->next;
				free(ptr);
		}
}
void deleteAtmiddle(){
	int key;
	printf("Enter the element to delete:");
	scanf("%d",&key);
	if (head == NULL){
			printf("list is Empty\n");
}
else{
		ptr=head;
		while(ptr->next != NULL && ptr->data != key){
					ptr=ptr->next;	 		
		}
		if(ptr == NULL){
			printf("Element not found");
		}else{
     ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
	}
	}
}


void deletetEnd(){
	if (head == NULL){
			printf("list is Empty\n");
}
else{
		ptr=head;
		while(ptr->next != NULL){
					ptr=ptr->next;	 		
		}
		printf(" element :%d",ptr->data);
		ptr->prev->next = NULL;
		free(ptr);
	}
}



void main(){
	int l,opt;

do{
		printf("\n/......Doubly...../\n");
		printf("\nEnter the Options\n1.create\n2.insAtBegining\n3.insAtLoc\n4.insAtEnd\n5.deletetEnd\n6.deleteAtmiddle\n7.deleteAtBegining\nExit->0:");
		scanf("%d",&opt);
		switch(opt){
			case 1:	printf("\nEnter the limit:");
							scanf("%d",& l);
							printf("\nEnter the element:");
							for(int i=0;i<l;i++){
									insert();
							}
							display();
							break;
			case 2:insertb();
							display();
							break;
			case 3:insertAtMid();
							display();
							break;
			case 4 :
							insertend();
							display();
							break;
			case 5 :
							deletetEnd();
							display();
							break;
			case 6 :
							deleteAtmiddle();
							display();
							break;
			case 7 :
							deleteAtBegining();
							display();
							break;
	
		}
	}while(opt != 0);
display();
}

