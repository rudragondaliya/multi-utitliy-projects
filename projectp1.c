#include<stdio.h>

main()
{
	float cel,fah;
	printf("enter a value of celesius:");
	scanf("%f",&cel);
	
	fah = (cel*9/5)+32;
	
	printf("the temperature in fahrenheit:%.2f",fah);
	
}
