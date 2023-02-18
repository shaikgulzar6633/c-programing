#include<stdio.h>
int main()
{
    int a,b=1,c,n;
	printf("enter the table value:");
	scanf("%d",&a);
	printf("enter the no. of multiples:");
	scanf("%d",&n);
	while(b<n)
	{
		c=a*b;
		printf("\n%d*%d=%d",a,b,c);
		b++;
		}
	return 0;	
}
