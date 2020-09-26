#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

struct Node* add(struct Node*p, int dat){
	struct Node* t , *temp;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->next = NULL;
	t->data = dat;
	temp = p;
	if(p->data == NULL){
		p->data = dat;
	}
	else if(p!=NULL){
		while(temp->next!= NULL){
			temp = temp->next;
		}
		temp->next = t;
	}
	return p;
}
struct Node* add_beginning(struct Node*p, int dat){
	struct Node* t;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->next = p;
	t->data = dat;
	return t;
}

int main(){
	int n;
	int data;
	struct Node* p = NULL;
	printf("Enter number of nodes \n");
	scanf("%d", &n);
	//p = (struct Node*)(malloc(sizeof(struct Node)));
	//p->next = NULL;
	//p->data = NULL;
	for(int i=0 ; i< n ; i++){
		printf("Enter node value %d\n" , i) ;
		scanf("%d",&data);
		p = add_beginning(p , data);
	}
	//printf("Enter node value to be added at beginning \n");
	//scanf("%d",&data);
	//p = add_beginning(p , data);
	while(p!= NULL){
		printf("%d \n" ,p->data);
		p = p->next;
	}
	return 0;
}
