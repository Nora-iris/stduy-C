#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,u,v,x1,x2,y1,y2;
	int s=0;
	int a[100][100]={0};
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(u=x1;u<x2;u++)
		{
			for(v=y1;v<y2;v++)
			{
				a[u][v]=1;
			}
		}
	}
	for(u=0;u<100;u++)
	{
		for(v=0;v<100;v++)
		{
			if(a[u][v]==1)
			{
				s++;
			}
		}
	}
	printf("%d",s);
	return 0;
}
