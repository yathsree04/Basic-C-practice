#include<stdio.h>
#include<stdlib.h>
int main(){
	int **ptr = (int**)malloc(sizeof(int)*3);
	int **ptr_2 = (int**)malloc(sizeof(int)*3);
	for (int i=0; i<3; i++) {
         *(ptr+i) = (int *)malloc(3 * sizeof(int));
         *(ptr_2+i) = (int *)malloc(3 * sizeof(int));
     }
	printf("Enter matrix");
	for(int i= 0 ; i < 3 ; i++){
		for(int j =0 ; j<3 ; j++){
			scanf("%d" , *(ptr +i) +j);
	}
}
printf("Transponsed matrix \n");
for(int i= 0 ; i < 3 ; i++){
		for(int j =0 ; j<3 ; j++){
		printf("%d " , *(*(ptr +j) +i));
	}
	printf("\n");
	}
	return 0;
}	
