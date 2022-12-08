#include<stdio.h>
int main()
{
	int n,i,j,t,k,x;
	int a[10001],b[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		k=a[i];
		b[i]=0;
		while(k!=0)
		{
			b[i]+=k%10;
			k/=10;
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j+1];x=a[j+1];
				b[j+1]=b[j];a[j+1]=a[j];
				b[j]=t;a[j]=x;
			}
			else if(b[j]==b[j+1])
			{
				if(a[j]>a[j+1])
				{
					t=b[j+1];x=a[j+1];
				    b[j+1]=b[j];a[j+1]=a[j];
			     	b[j]=t;a[j]=x;
				}
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",a[i],b[i]);
	}
	return 0;
}
