#include<stdio.h>
int main()
{
	int n,count=0;
	int i,j,t,x=0,y=0;
	int a[100],b[100],c[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			b[x]=a[i];
			x++;
		}
		else
		{
			c[y]=a[i];
			y++;
		}
	}
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];b[j]=b[j+1];b[j+1]=t;
			}
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<y-1;i++)
	{
		for(j=0;j<y-1-i;j++)
		{
			if(c[j]<c[j+1])
			{
				t=c[j];c[j]=c[j+1];c[j+1]=t;
			}
		}
	}
	for(i=0;i<y;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
	
}
