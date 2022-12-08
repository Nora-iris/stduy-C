#include<stdio.h>
int main()
{
	int n,i=0,k=0,max=0;
	int a[80];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			k=i;
		}
	}
	printf("%d %d %d",n,max,k);
	return 0;
	
}
