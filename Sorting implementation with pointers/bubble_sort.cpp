#include<stdio.h>
#include<stdlib.h>
void swap(int * a , int * b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int *ptr = (int*)malloc(sizeof(int)*10);
	for(int i=0; i < 10 ; i++){
		scanf("%d" , ptr+i);
	}
	for(int i=0; i < 10 ; i++){
		for(int j=0 ; j < 9 ; j++){

			if(*(ptr+j) > *(ptr+j+1)){
				swap(ptr+j ,ptr+j+1);
			}
		}
	}
	for(int i=0 ; i< 10 ;i++){
		printf("%d ", *(ptr+i));
	}	
	return 0;
}
