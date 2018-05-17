//lower traingular of the matrix

#include<stdio.h>
int main()
{
	int i, j, n, m;
	int matrix[20][20], lower_matrix[20][20];
	
	printf("enter the no of rows and col\n");
	scanf("%d %d", &n, &m);
	
	printf("input your matrix elements\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j <= i){
				lower_matrix[i][j] = matrix[i][j];
			}
			else{
				lower_matrix[i][j] = 0;
			}
		}
	}
	
	printf("the upper triangle of the matrix is: \n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d\t", lower_matrix[i][j]);
		}
		printf("\n");
	}
}



