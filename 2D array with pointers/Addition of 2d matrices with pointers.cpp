#include<stdio.h>
#include<stdlib.h>
int main(){
	int **ptr = (int**)malloc(sizeof(int)*3);
	int **ptr_2 = (int**)malloc(sizeof(int)*3);
	for (int i=0; i<3; i++) {
         *(ptr+i) = (int *)malloc(3 * sizeof(int));
         *(ptr_2+i) = (int *)malloc(3 * sizeof(int));
     }
	printf("Enter first matrix");
	for(int i= 0 ; i < 3 ; i++){
		for(int j =0 ; j<3 ; j++){
			scanf("%d" , *(ptr +i) +j);
	}
}
printf("Enter second matrix");
for(int i= 0 ; i < 3 ; i++){
		for(int j =0 ; j<3 ; j++){
			scanf("%d" , *(ptr_2 +i) +j);
	}
}
int sum = 0; 
for(int i= 0 ; i < 3 ; i++){
		for(int j =0 ; j<3 ; j++){
		sum =	(*(*(ptr_2 +i) +j)) + (*(*(ptr +i) +j)) ;
		printf("%d " ,sum); 
	}
	printf("\n");
}
return 1;
}

