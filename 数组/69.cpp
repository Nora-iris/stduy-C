#include<stdio.h>
int main()
{
	int n,m,i,j,k,u,v,x,max,d;
	int a[100][100],b[100],c[100];
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
		u=0;k=0;d=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				d=1;
				for(j=j,x=0;a[i][j]==1&&j<n;j++)
				{
					x++;
				}
				b[u]=x;c[u]=j-x;
				u++;
			}
		}
		v=u;
		if(d!=1)
		{
			printf("-1 -1\n");
		}
		else
		{
			max=b[0];
			for(u=1;u<v;u++)
			{
				if(b[u]>max)
				{
					max=b[u];
					k=u;
				}
			}
			printf("%d %d\n",c[k],c[k]+b[k]-1);
		}
	}
	
	return 0;
}
