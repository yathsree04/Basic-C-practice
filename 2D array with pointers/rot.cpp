#include<stdio.h>
int main(){
	int A[10] = { 10 , 20 ,30 ,40 ,50 ,60 ,70 ,80 , 90 ,100};
	int key = 5;
	int temp[10] = {0};
	for(int i=0 ; i < key ; i++){
		temp[i] = A[i];
		A[i] = A[key+i];
	}
	for(int i = key ; i<10 ; i++){
		A[i] = temp[i - key];
	}
	for(int i= 0 ; i< 10 ; i++){
		printf("%d " , A[i]);
	}
	return 0;
}
