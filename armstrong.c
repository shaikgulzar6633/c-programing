//armstrong number
#include<math.h>
#include<stdio.h>
int main()
{
	int n,m,sum=0,r,cube;
	printf("enter any 3 digit number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		cube=pow(r,3);
		sum=sum+cube;
		n=n/10;
	}
	if(m==sum)
	printf("ARMSTRONG");
	else
	printf("NOT ARMSTRONG");
	return 0; 
}
