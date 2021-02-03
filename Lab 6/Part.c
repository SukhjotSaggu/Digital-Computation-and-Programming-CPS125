#include <stdio.h>

int main (void)
{
	int a, b, c, larger, largest, middle, smaller, smallest;
	
	printf("Enter First Number: \n");
	scanf("%d", &a);
	printf("Enter Second Number: \n");
	scanf("%d", &b);
	printf("Enter Thrid Number: \n");
	scanf("%d", &c);
	printf("\nThe First Number Is: %d\n", a);
	printf("The Second Number Is: %d\n", b);
	printf("The Thrid Number Is: %d\n", c);
	
	if(a > b){
		larger = a;
	}
	else{
		larger = b;
	}
	
	if(larger > c){
		largest = larger;	
	}
	else{
		largest = c;
	}
	
	if(a < b){
		smaller = a;
	}
	else{
		smaller = b;
	}
	
	if(smaller < c){
		smallest = smaller;	  
	}
	else{
		smallest = c;
	}

	middle = a + b + c - smallest - largest;	
	printf("\nThe Smallest Number Is: %d\n", smallest);
	printf("The Middle Number Is: %d\n", middle);
	printf("The Largest Number Is: %d\n", largest);
}

