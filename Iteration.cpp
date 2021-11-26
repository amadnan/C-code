#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define dif 0.000001
double fun(int x)
{
	return (1+(sin(x)/10.0));
}
int main()
{
	double x0,a,b;
	scanf("%lf",&x0);
	a=x0;
	while(1)
	{
		b=fun(a);
		if(b==0.0 || abs(a-b)<dif) break;
		a=b;
	}
	printf("root of the function is : %lf\n",b);
	return 0;
}