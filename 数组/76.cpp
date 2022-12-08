#include<stdio.h>
int main()
{
	int n;
	int a[50],b[100000]={0};
	int i,j,temp,u;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			printf("%d:%d\n",a[i],b[a[i]]);
		}
	}
	return 0;
	
}
