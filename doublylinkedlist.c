#include<stdio.h>
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
		printf("\nENTER THE ELEMENT:");
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
	printf("\nENTER THE ELEMENT:");
	insert();
}

void insertAtMid(){
	int loc,i;
struct node *temp;
	printf("\nEnter the key element:");
  scanf("%d",& loc);
	printf("\nENTER THE ELEMENET:");
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
		printf("\nEnter the Options\n1.CREATION\n2.INSERTION AT BEGINING\n3.INSERTION AT SPECIFIC POSITION\n4.INSERTION AT END\n5.DELETION AT END\n6.DELETION AT SPECIFICED POSITION\n7.DELETION AT BIGINIG\n0.EXIT:");
		scanf("%d",&opt);
		switch(opt){
			case 1:	printf("\nENETR THE LIMIT:");
							scanf("%d",& l);
							printf("\nENTER THE ELEMENT:");
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

