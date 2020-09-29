#include<stdio.h>
#include<stdlib.h>
static int top = -1;
void push(int *arr, int value, int size){
	if(size-1 == top){
		printf("Overflow");
	}
	else{
		top++;
		arr[top] = value;
	}
}

int pop(int *arr){
	int ans = 5;
	if(top == -1){
		printf("empty array");
		return -1;
	}
	else{
		ans = arr[top];
		top--;
	return ans;

}
}

int main(){
	int size;
	scanf("%d" , &size);
	int *arr = (int*)(malloc(sizeof(int)*size));
	for(int i=0 ; i< size; i++){
		printf("Enter number %d",  i);
		scanf("%d" , arr+i);
		top++;
	}
	int val = pop(arr);
	printf("Popped value  %d \n" , val);
	push(arr,5,size);
	for(int i=0 ; i< size; i++){
		printf("Numbers in array  %d \n",  arr[i]);
	}
}
