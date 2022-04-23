#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	/*int a[10],i,n,temp,j,min;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	:wq
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}*/
	/*for(i=0;i<n;i++)
	{
		min=a[i];
		for(j=i+1;j<n;j++)
			if(min>a[j])
			{
				min=a[j];
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}*/
/*	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i;
		while(j>0 && a[j-1]>temp)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	int x;
	printf("Enter number: ");
	scanf("%d",&x);
	int mid,high,low,flag;
	low=0;high=n-1;
	mid=(low+high)/2;
	if(a[mid]==x)
	{
		flag=1;
	}
	else if(a[mid]<x)
	low=mid+1;
	else if(a[mid]>x)
		high=mid-1;
	if(flag==1)
	printf("The element is found at %d position",mid+1);
}*/

	/*int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d\tb=%d",a,b);
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}*/
int (*p)[5],i,j,m,n;
printf("Enter the value of m,n: ");
scanf("%d %d",&m,&n);
printf("Enter elements:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",*(p+i)+j);
printf("elements:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
printf("%ls ",*(*(p+i)+j));
}
	

