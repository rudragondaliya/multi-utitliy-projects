#include<stdio.h>

main()
{
	float scoref;
	int score;
	char grade;
	printf("Enter your score (out if 100):");
	scanf("%f",&scoref);
	
	score = (int)scoref;
	
 grade = (score<=100 && score>=90) ? 'A' : 
         (score<=89 && score>=80)  ? 'B' : 
         (score<=79 && score>=70)  ? 'C' : 
         (score<=69 && score>=60)  ? 'D' : 
         (score<=59 && score>=40)  ? 'E' : 
         (score<=39 && score>=20)  ? 'F' : 'F';
	
	printf("Your Grade is %c\n",grade);
	
	
	
	switch(grade){
		case 'A':
			printf("Excellent Work!\n");
			break;
		
		case 'B':
			printf("Well Done\n");
			break;
		
		case 'C':
			printf("Good Job\n");
			
		case 'D':
			printf("You passed,but you could do better\n");
			break;
			
		case 'E':
			printf("Need improvement\n");
			break;
			
		case 'F':
			printf("Sorry,you failed\n");
			break;
			
		default:
			printf("invalid grade\n");
			break;
	}
	
	
	if(grade == 'A'||grade == 'B'||grade == 'C'||grade == 'D'){
		printf("Congratulations! You are eligible for the next level\n");
	}
	else{
		printf("Please try again next time\n");
	}
}