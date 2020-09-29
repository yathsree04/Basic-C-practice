#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node* prev; 
	struct node*next;
	int data;
};
//inserting at end
struct node* insert(struct node* p, int val){
	struct node* t = (struct node*)(malloc(sizeof(struct node)));
	struct node* temp;
	temp = p;
	t->next = NULL;
	t->data = val;
	if(p == NULL){
		p = t;
		t->prev = NULL;
	}
	else{
	while(temp->next!= NULL){
		temp = temp->next;
	}
	temp->next = t;
	t->prev = temp;
	
}
	return p;
}
int main(){
	struct node*p = NULL;
	p = insert(p , 10);
	while(p!=NULL){
		printf("%d" , p->data);
		p = p->next;
	}
	return 0;
} 
