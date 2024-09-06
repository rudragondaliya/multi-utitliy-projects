#include<stdio.h>

main()
{
	float basesalary,grosssalary,hrap,dap,tap,hraamt,daamt,taamt;
	
	printf("enter the base salary:");
	scanf("%f",&basesalary);
	printf("enter the hra percent:");
	scanf("%f",&hrap);
	printf("enter da percent:");
	scanf("%f",&dap);
	printf("enter ta percent:");
	scanf("%f",&tap);
	
	hraamt = (hrap/100)*basesalary;
	daamt = (dap/100)*basesalary;
	taamt = (tap/100)*basesalary;
	
	grosssalary = basesalary + hraamt + daamt + taamt;
	
	printf("gross salary: %.2f",grosssalary);
	
}
