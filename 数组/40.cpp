#include<stdio.h>
int main()
{
	int n,i,j,x,y,t;
	int a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	for(i=2;i<n;i++)
	{
		x=a[i]-a[i-1];
		y=a[i-1]-a[i-2];
		if(x!=y)
		{
			break;
		}
	}
	if(i!=n)
	{
		printf("no");
	}
	else
	{
		printf("%d",x);
	}
	return 0;
}
