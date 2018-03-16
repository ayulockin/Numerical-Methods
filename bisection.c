#include<stdio.h>
float f(float x){
	return(x*x*x - 3*x + 1.06);
	}

int main()
{
	int n, i;
	float a, b, val1, val2, val, xn;
	printf("enter first val\n");
	scanf("%f", &a);
	printf("enter second val\n");
	scanf("%f", &b);
	val1 = f(a);
	printf("%f\n", val1);
	val2 = f(b);
	printf("%f\n", val2);
	
	printf("enter limit\n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		xn = (a + b)/2;
		printf("%f\n", xn);
		val = f(xn);
		printf("%f\n", val);
		if(val > 0){
			a = xn;
		}
		else if(val < 0){
			b = xn;
		}
	}	
}
