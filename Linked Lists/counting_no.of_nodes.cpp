#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
int count_nodes(struct Node* root){
	int count = 0;
	while(root!=NULL){
		root = root->next;
		count++;
	}
	return count;	
}
struct Node* add(struct Node*p, int dat){
	struct Node* t , *temp;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->next = NULL;
	t->data = dat;
	temp = p;
	if(p== NULL){
		p = t;
	}
	else {
		while(temp->next!= NULL){
			temp = temp->next;
		}
		temp->next = t;
	}
	return p;
}
int main(){
	int n , data_1;
	int count;
	printf("Enter number of nodes \n");
	scanf("%d" , &n);
	struct Node* p = NULL;
	//p = (struct Node*)malloc(sizeof(struct Node));
	//p->next = NULL;
	//p->data = NULL;
	for(int i = 0 ; i< n ; i++){
		printf("Enter numbers %d \n", i);
		scanf("%d" , &data_1);
		p  = add(p,data_1);
	}
	count = count_nodes(p);
	printf("%d \n",count);
	while(p!= NULL){
		printf("%d \n" ,p->data);
		p = p->next;
	}
	return 0;
}
