//sum of two matrix

#include<stdio.h>
int main()
{
	int i, j, n, m, sum = 0;
	int m1[20][20], m2[20][20];
	
	printf("enter the no of rows and col\n");
	scanf("%d %d", &n, &m);
	
	printf("input your elements for first matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("input your elements for second matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("first matrix\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d\t", m1[i][j]);
		}
		printf("\n");
	}
	
	printf("second matrix\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d\t", m2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			sum = sum + m1[i][j] + m2[i][j];
		}
	}
	
	printf("%d", sum);
	
}
