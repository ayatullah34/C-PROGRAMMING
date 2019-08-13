#include <stdio.h>

int main()
{
float x;
float sum;
float r;
int i;
int n;
	
scanf("%f",&x);
scanf("%d",&n);
sum =1; 

r= 1;
for (i=1;i<=n;i++)
{
r=(r*x)/(float)i;
sum+=r;

}

printf(" %.2f\n",sum);
} 

