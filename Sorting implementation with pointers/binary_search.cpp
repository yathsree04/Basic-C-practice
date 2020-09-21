#include<stdio.h>
void binary_search(int a[], int key){
	int low = 0;
	int high = 9 ;
	int mid = low + (high-low)/2 ;
	while(low < high){
		mid = low + (high-low)/2;
		if(a[mid] == key){
		printf("Key found at index %d" , mid);
		break;
		}
		else if(key > a[mid]){
			low = mid+1;
		}
		else high = mid-1; 
	}
}
int main(){
	int A[10] = {0,5,1,2,10,9,8,7,10,2};
	int *ptr;
	int key = 10;
	binary_search(&A[0] , key);
	return 1;
}
