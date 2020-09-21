#include<stdio.h>
void swap(int * a , int * b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int A[10] = {0,5,1,2,10,9,8,7,10,2};
	int min = A[0];
	int min_index;
	for(int i= 0 ; i< 9 ; i++){
		min = A[i];
		min_index = i;
		for(int j= i+1; j< 10 ; j++){
			if(min > A[j]){
				min = A[j];
				min_index = j;
			}
		}
			swap(&A[i] , &A[min_index]);
			
		}
	int *ptr;
	ptr = &A[0];
	for(int i=0 ; i< 10 ;i++){
		printf("%d \n", *(ptr+i));
	}
	
	return 1;
}
