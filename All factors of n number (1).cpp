#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("factors are: ");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
}
