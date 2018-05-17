#include<stdio.h>
int main()
{
	float A[20][20], b[20];
	int i,j;
	
	printf("enter the seq of coefficients:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%f",&A[i][j]);
		}
	}
	
	printf("enter the seq of constants:\n");

	for(i=0;i<3;i++){
		scanf("%f",&b[i]);
	}
	
	printf("your equation is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3f\t" = "%f",A[i][j], b[j]);
		}
		printf("\n");
	}
}
