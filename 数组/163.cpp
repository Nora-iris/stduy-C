#include<stdio.h>
int main()
{
	int n,a[20][20];
	int i,j,t,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0,j=0;i<n;i++,j++)
    {
	    sum+=a[i][j];
	}
	for(i=0,j=n-1;i<n;i++,j--)
   	{
	    sum+=a[i][j];
    }
	if(n%2==1)
    {
	    t=(n-1)/2;
	    sum-=a[t][t];
	}
	printf("%d",sum);
	return 0;
}
