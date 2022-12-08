#include<stdio.h>
int main() 
{
	int n,q,i,j;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d ",a[0][0]);
	for(q=1;q<2*n;q++)
	{
		if(q<n)
		{
			if(q%2==1)
			{
				for(i=0;i<q+1;i++)
				{
					printf("%d ",a[i][q-i]);
				}
			}
			else
			{
				for(i=0;i<q+1;i++)
				{
					printf("%d ",a[q-i][i]);
				}
			}
		}	
		else
		{
			if(q%2==1)
			{
				for(i=q-n+1;i<n;i++)
				{
					printf("%d ",a[i][q-i]);
				}
			}
			else
			{
				for(i=q-n+1;i<n;i++)
				{
					printf("%d ",a[q-i][i]);
				}
			}
		}
	}
	return 0;
}
