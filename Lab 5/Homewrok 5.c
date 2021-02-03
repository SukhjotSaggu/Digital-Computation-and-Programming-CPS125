#include <stdio.h>

int main (void)
{
	int num, digit;
	
	printf("Enter A Number: \n");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 10;
		printf("%d\n", digit);
		num = num/10;
	}
}

