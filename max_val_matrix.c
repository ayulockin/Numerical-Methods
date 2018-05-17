//max element of a matrix

#include<stdio.h>
int main()
{
	int i, j, n, m, max_val;
	int matrix[20][20], tran_matrix[20][20];
	
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
	
	max_val = matrix[0][0];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max_val<matrix[i][j]){
				max_val = matrix[i][j];
			}
		}
	}
	
	printf("the maximum of all the elemnts in the matrix is :  %d", max_val);
}
