#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("enter the numbers:");
	scanf("%d",&n);
	{
    for(i=1;i<=n;i++)
    
    	fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
