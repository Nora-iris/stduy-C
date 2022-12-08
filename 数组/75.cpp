#include<stdio.h>
int main()
{
	int n,m,i,j;
	int a[256][256],b[256]={0};
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[a[i][j]]+=1;
		}
	}
	for(i=0;i<256;i++)
	{
		if(b[i]!=0)
		{
			printf("%d %d\n",i,b[i]);
		}
	}
	return 0;
	
	
}
