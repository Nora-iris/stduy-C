#include<stdio.h>
int main()
{
	int m,n,x,y;
	int min;
	int i,j,u,k=0,v=0;
	int a[100][100];
	scanf("%d %d\n",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=1;j<n;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				k=j;
			}
		}
		x=i;y=k;
		for(u=0;u<m;u++)
		{
			if(a[x][y]<a[u][y])
			{
				break;
			}
		}
		if(u==m)
		{
			printf("%d %d %d\n",x,y,a[x][y]);
			v=1;
		}
	}
	if(v==0)
	{
		printf("no");
	}
	return 0;
}
