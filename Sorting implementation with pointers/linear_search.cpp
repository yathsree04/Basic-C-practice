#include<stdio.h>
void linear_search(int *ptr, int key){
	for(int i=0 ; i< 10 ; i++){
		if(key == *(ptr+i) ){
		printf("Key found at index %d \n", i);	
	}
}
}
int main(){
	int A[10] = {0,5,1,2,10,9,8,7,10,2};
	int *ptr;
	int key = 10; 
	linear_search(A , key);
	return 1;
}
