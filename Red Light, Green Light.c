#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int a[n],count=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(k<a[i])
	            count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
