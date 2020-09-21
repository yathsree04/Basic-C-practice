#include<stdio.h>
void swap(int * a , int * b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int A[10] = {0,5,1,2,10,9,8,7,10,2};
	for(int i=0; i < 10 ; i++){
		for(int j=0 ; j < 9 ; j++){
			if(A[j] > A[j+1]){
				swap(&A[j] ,&A[j+1]);
			}
		}
	}
	int *ptr;
	ptr = &A[0];
	for(int i=0 ; i< 10 ;i++){
		printf("%d", *(ptr+i));
	}	
	return 0;
}
