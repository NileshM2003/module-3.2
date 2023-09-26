#include<stdio.h>
main()
{
	int array[8],n,i;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i--);
	{
	  scanf("%d",&array[i]);
	}
	printf("array display:");
	for(i=n;i>=1;i--);
	{
		printf("reversed number is:%d",array[i]);
	}
}
