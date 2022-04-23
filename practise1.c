#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,i,d,n;
	printf("Enter the elements in series:");
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		d=a+b+c;
		a=b;b=c;c=d;
		printf(",%d",d);
	}
}
