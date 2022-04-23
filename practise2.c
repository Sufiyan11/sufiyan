#include<stdio.h>
#include<math.h>
int main()
{
	int i,y;
	float x,t=1,s=1;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	i=1;
	y=x;
	x=x*((22/7.0)/180.);
	while(1)
	{
		t=-(t*x*x)/((2*i)*(2*i-1));
		s=s+t;
		if(fabs(t<0.000001))
		break;
	}
	printf("cos %d = %f",y,s);
}
