#include <stdio.h>

int main (void)
{
	int number, num, i, BN, NOS, NOO, rand;
	
	printf("Enter A Number: \n");
	scanf("%d", &number);
	printf("The Number You Have Entered Is: %d\n", number);
	
	for(i=0;i<5;i++){
		printf("Enter A Number\n");
		scanf("%d",&num);
		printf("Number = %d\n", num);
	}
	printf("Enter Beach Number: \n");
	scanf("%d", &BN);
	printf("Enter Number Of Samples: \n");
	scanf("%d", &NOS);
	printf("Enter Number Of Organisms per 100 ml Of Water: \n");
	scanf("%d", &NOO);
	printf("The Beach Number You Have Entered Is: %d\n", BN);
	printf("The Number Of Samples You Have Entered Is: %d\n", NOS);
	printf("The Number Of Organisms per 100 ml Of Water You Have Entered Is: %d\n", NOO);
	
	for(i=0;i<NOS;i++){
		printf("Enter Number Of Organisms per 100 ml Of Water: \n");
		scanf("%d", &NOO);
		printf("The Number Of Organisms per 100 ml Of Water You Have Entered Is: %d\n", NOO);
	} 

}


