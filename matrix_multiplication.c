#include<stdio.h>
int main()
{
	int i, j, k, l;
	int arr1[10][10], arr2[10][10];
	int result[20][20];
	int sum = 0;
	
	printf("input data for first matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){ 
		    scanf("%d", &arr1[i][j]);
	    }
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	printf("input data for second matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", arr2[i][j]);
		}
	}
	printf("\n");
	

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(l=0;l<3;l++){
				for(k=0;k<3;k++){
					sum = sum + arr1[i][j]*arr2[k][l];
				}
			}
			result[i][j] = sum;
		}
		sum = 0;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d\t", &result[i][j]);
		}
		printf("\n");
	}
	
}
