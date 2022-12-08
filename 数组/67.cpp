#include<stdio.h>
int main()
{
	int n,k,i;
	int a[100];
	int v=0;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==k)
		{
			printf("%d ",i);
			v=1;
		}
	}
	if(v==0)
	{
		printf("-1");
	}
	return 0;
	
}
