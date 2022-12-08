#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i,j,temp,v;
	gets(str);
	v=strlen(str);
	strupr(str);
	for(i=0;i<v;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			for(j=i+1;j<v;j++)
			{
				if(str[j]>='A'&&str[j]<='Z')
				{
					if(str[i]>str[j])
					{
						temp=str[i];str[i]=str[j];str[j]=temp;
					}
				}
			}
			
		}
	}
	puts(str);
	return 0;
}
