#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[3]={0};
	int i,v,u=0,t=0;
	gets(a);
	v=strlen(a);
	if(v==0)
	{
		t=0;
	}
	else
	{
		t=1;
		if(v>8)
		{
			t=t+1;
		}
    	for(i=0;i<v;i++)
    	{
	    	if(a[i]>='0'&&a[i]<='9')
	    	{
	    		b[0]++;
	    	}
	    	else if(a[i]>='a'&&a[i]<='z')
	    	{
	     		b[1]++;
	    	}
	     	else if(a[i]>='A'&&a[i]<='Z')
	    	{
	    		b[2]++;
	    	}
	    	else
	    	{
		    	b[3]++;
	    	}
        }
        for(i=0;i<4;i++)
        {
         	if(b[i]!=0)
        	   u++;
     	}
     	t=t+u-1;
    }
    printf("%d",t);
    return 0;
    
	
    
	
}
