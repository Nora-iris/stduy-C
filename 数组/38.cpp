#include<stdio.h>
int main()
{
	int n,x,m;
	int i=0,j,count=0;
	int a[1000];
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		a[i]=m%10;
		m/=10;
		i++;
	}
	x=i-1;
	{
		for(i=0,j=x;i<j;i++,j--)
		{
			if(a[i]!=a[j])
			{
				printf("no");
				break;
			}
		}
		if(i>=j)
		{
			for(i=0;i<=x;i++)
			{
				count+=a[i];
			}
			printf("%d",count);
		}
	}
	return 0;
}
