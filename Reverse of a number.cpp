#include<stdio.h>
int main()
{
	int i,n,n1,rem,sum=0,rev;
	printf("Enter the number= ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
printf("%d",rev);
}
