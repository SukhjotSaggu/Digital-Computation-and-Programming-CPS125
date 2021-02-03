#include <stdio.h>

int main (void)
{
	int t1, t2, a1, a2;
	float avg;
	char grade;
	
	printf("Enter two test marks \n");
	scanf("%d%d", &t1, &t2);
	
	printf("Enter two assignment marks\n");
	scanf("%d%d", &a1, &a2);
	
	avg = (a1 + a2 + t1 +t2) / 4;
	
	if(avg >= 80)
	
		{
			grade = 'A';
			printf("Average of %f is grade %c", avg, grade);
		}
	
	else if(avg >= 70) 
	
		{
			grade = 'B';
			printf("Average of %f is grade %c", avg, grade);
		}
	
	else if(avg >= 60) 

	{
		grade = 'C';
		printf("Average of %f is grade %c", avg, grade);
	}
	
	else if(avg >= 50) 
		
			{
				grade = 'D';
				printf("Average of %f is grade %c", avg, grade);
			}
			
	else 
		
			{
				grade = 'F';
				printf("Average of %f is grade %c", avg, grade);
			}
	return(0);
}


