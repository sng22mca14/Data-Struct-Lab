#include<stdio.h>
#include<stdlib.h>
struct node{ 
 	struct node *left;
	int data;
	struct node *right;
};
struct node *root=NULL,*new =NULL,*ptr,*top;
int x,flag=0;
void getNode(int a){
	new = (struct node*)malloc(sizeof(struct node));
	if(new== NULL){
		printf("insuficient memory");
	}else{
	new->data =a;
	new->left=NULL;
	new->right=NULL;
	}
}
void insert(){
	printf("\nEnter the element:");
		scanf("%d",&x);
		getNode(x);
	if(root == NULL){
		root = new;	
		printf("\nroot inserted:");
	}else{
		ptr = root;
		while(ptr!= NULL){
			if(x== ptr->data){
				printf("Item present in tree\n");

			}else if(x>ptr->data){
				top= ptr;
				ptr =ptr->right;
			}else{
				top = ptr;
				ptr=ptr->left;
			}
		}

	if(ptr == NULL){
		if(x>top->data){
			top->right = new;	
		}else{
			top->left=new;
			}
	}
	}
}


void inOrder(struct node *ptr){

if(ptr!= NULL){
	inOrder(ptr->left);
	printf("%d,",ptr->data);
	inOrder(ptr->right);
}
}


void preOrder(struct node *ptr){

if(ptr!= NULL){
	printf("%d,",ptr->data);
	preOrder(ptr->left);
	preOrder(ptr->right);
}
}

void postOrder(struct node *ptr){

if(ptr!= NULL){
	postOrder(ptr->left);
	postOrder(ptr->right);
	printf("%d,",ptr->data);
}
}

/* huh 
void srch(struct node *ptr,int val){

if(ptr!= NULL){
	srch(ptr->left,val);
	if(val == ptr->data){
			printf("eLEMENT FOUND");
			flag =1;
	}
	srch(ptr->right,val);
}
}

*/
void main()
{
	int opt,m,v;
	do
	{
	printf("\nEnter the options\n 1.INSERT\n 2.Traversal\n exit->0:\n");
	scanf("%d",&opt);
		switch(opt)
		{
		case 1:insert();
			break;
						
		case 2:printf("\nInorder:");
					inOrder(root);
					printf("\npreorder:");
					preOrder(root);
					printf("\npostorder:");
					postOrder(root);
					printf("\n");
			break;
				/*case 3:flag=0;
							printf("\nEnter the value to search:");
							scanf("%d",&v);
							srch(root,v);
							if(flag== 0){
								printf("Element not found!");
								}
			break;*/
		}
	
	}while(opt != 0);
}
