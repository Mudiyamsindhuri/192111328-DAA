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
		sum=sum+rem;
		n=n/10;
	}
if(n%sum==0)
{
	printf("Harshad number");
}
else
{
	printf("Not a harshad number");
}
}
	
