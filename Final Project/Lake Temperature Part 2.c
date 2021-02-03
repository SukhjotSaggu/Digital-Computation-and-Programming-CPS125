#include <stdio.h>


int main(int argc, char **argv)
{
	int i, j;
	double temp[365][8], average[6], totalAverage = 0, num, sum, warmest = 0, coldest = 0;
	char *lake[] = {"Superior", "Michigan", "Huron", "Erie", "Ontario", "St.Clair"};
	char *cold = "", *warm = "";
	FILE *data;
	data = fopen("data.txt", "r");
	
	for (i = 0; i < 365; i++)
	{
		for (j = 0;j < 8;j++)
		{
			fscanf(data, "%lf", &num);
			temp[i][j] = num;
		}
	}
	fclose(data);
	
	for(j = 0; j < 8; j++){
		sum = 0;

	for(i = 0; i < 365; i++){
		sum = sum + temp[i][j + 2];
		average[j] = sum / 365;
		}
	}
	
	for(i = 0; i < 6; i++){
		totalAverage = totalAverage + average[i];
	}
	totalAverage = totalAverage / 6;
	
	warmest = average[0];
	coldest = average[0];
	warm = lake[0];
	cold = lake[0];
	
	for(i = 0; i < 6; i++){	   
		if(average[i] < coldest){
			coldest = average[i];
			cold = lake[i]; 
		}
		if(average[i] > warmest){
				warmest = average[i];
				warm = lake[i];	  	  
			}
	}
	
	printf("The coldest Lake is %s at %0.2lf C \n", cold, coldest);
	printf("The warmest Lake is %s at %0.2lf C \n", warm, warmest);
	printf("\n");
	
	for(i = 0;i < 6; i++){
		if(average[i] < totalAverage){
			printf("Lake %s has an average temperature of %0.2lf C which is below the total yearly average of %0.2lf C\n", lake[i], average[i], totalAverage);
		}
	}	
	
	for(i = 0;i < 6; i++){
	if(average[i] >= totalAverage){
			printf("Lake %s has an average temperature of %0.2lf C which is ablove the total yearly average of %0.2lf C\n", lake[i], average[i], totalAverage);
		}	   
	}	
			  
}

