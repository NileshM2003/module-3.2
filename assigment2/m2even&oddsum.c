#include<stdio.h>
main()
{
	int b,sum,n;
	printf("enter the even number: ");
	scanf("%d%d",&b,&n);
	sum=b+n;
	if(sum%2==0)
	{	
		
		printf("enter value is even number:%d",sum);
	}
	else
	{
		printf("enter value is odd number:%d",sum);
	}
}
