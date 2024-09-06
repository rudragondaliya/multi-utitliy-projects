#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter the a angle:");
	scanf("%d",&a);
	printf("enter the b angle:");
	scanf("%d",&b);
	
	c = 180 - (a + b);
	printf("c angle:%d",c);
	
}
