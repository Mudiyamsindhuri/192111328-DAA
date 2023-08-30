#include<stdio.h>
int main()
{
	int i,j,n,a[10],pos,val;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("array elements are: ");
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
    printf("\nenter the element to be inserted: ");
    scanf("%d",&val);
    printf("enter the position to be inserted: ");
    scanf("%d",&pos);
    n+=1;
    for(i=n-1;i>=pos;i--)
    {
    	a[i]=a[i-1];
    	a[pos-1]=val;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
