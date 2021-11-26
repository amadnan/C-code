#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define dif 0.00001
double ABS(double x)
{
	if(x<0.0) return -x;
	return x;
}
double fun(double x)
{
	return x*x-5*x+6.0 ;
}
int main()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	if(fun(b)*fun(a)>=0) printf("Wrong interval");
	else{
		while(1)
		{
			c=(a+b)/2.0;
			if (fun(c) == 0.0 )
            	break;
        	else if (fun(c)*fun(a) < 0)
            	b = c;
        	else
            	a = c;
            if(ABS(b-a)<dif) break;
		}
		printf("root of the function is : %lf\n",c);
	}
	return 0;
}