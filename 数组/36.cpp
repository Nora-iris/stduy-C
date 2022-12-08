#include<stdio.h>
int main()
{
	int m,a[20][20],b[20];
	int i,j,k,x=0,y=0,t;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			if(j==m-1)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<m;j++)
		{
			b[i]+=a[i][j];
		}
	}
	for(j=0,k=m;j<m;j++,k++)
	{
		b[k]=0;
		for(i=0;i<m;i++)
		{
			b[k]+=a[i][j];
		}
	}
	for(i=0,j=0;i<m;i++,j++)
	{
		x+=a[i][j];
		y+=a[m-i-1][j];
	}
	b[2*m]=x;b[2*m+1]=y;
	for(i=0;i<2*m+1;i++)
	{
		for(j=0;j<2*m+1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	for(i=0;i<2*m+2;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
	
}
