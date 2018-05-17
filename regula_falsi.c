#include<stdio.h>
float f(float x){
	return(x*x*x - 3*x - 5);
	}

int main()
{
	int n, i;
	float a, b, val_a, val_b, val, xn;
	
	printf("give two initial values\n");
	scanf("%f %f", &a, &b);
	
	val_a = f(a);
	val_b = f(b);
	printf("%f\n", val_a);
	printf("%f\n", val_b);
	if (val_a*val_b < 0){
		printf("regula falsi is applicable\n");
	}
	
	printf("give the iterative length\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		xn = (a*val_b - b*val_a)/(val_b - val_a);
		val = f(xn);
		printf("%f\n", xn);
		if(val<0){
			a = xn;
		}
		else if(val > 0){
			b = xn;
		}
		
	}
	
}
