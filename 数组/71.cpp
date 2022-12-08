#include<stdio.h>
int main()
{
	int n,m,k,t;
	int i,j,u,v,x1,x2,y1,y2;
	int count=0;
	int a[50][50];
	scanf("%d %d %d %d",&n,&m,&t,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==k)
			{
				x1=i;y1=j;
				break;
			}
		}
		if(j!=m)
		  break;
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>=0;j--)
		{
			if(a[i][j]==k)
			{
				x2=i;y2=j;
				break;
			}
		}
		if(j!=-1)
		   break;
	}
	v=k;u=k;
	for(j=y1;j<=y2;j++)
	{
		if(x1!=0)
		{
		   if(a[x1-1][j]!=u)
	    	{
			  count++;
			  u=a[x1-1][j];
	    	}
	    }
	}
	u=k;
	for(j=y1;j<=y2;j++)
	{
	    if(x2!=n-1)
	    {
	    	if(a[x2+1][j]!=u)
	    	{
			  count++;
			  u=a[x2+1][j];
	    	}
		}
	}
	for(i=x1;i<=x2;i++)
	{
		if(y1!=0)
		{
			if(a[i][y1-1]!=v)
			{
				count++;
				v=a[i][y1-1];
			}
			
		}
	}
	v=k;
	for(i=x1;i<=x2;i++)
	{
		if(y2!=m-1)
		{
			if(a[i][y2+1]!=v)
			{
				count++;
				v=a[i][y2+1];
			}
		}
	}
	printf("%d",count);
	return 0;
	
}
