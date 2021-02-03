#include <stdio.h>

void av_temp(double arr[365][8], int n, char *str[], double *sto);

int main(int argc, char **argv)
{
	int i, j;
	double temp[365][8], average[6], totalAverage = 0, num, sum;
	char *lake[] = {"Superior", "Michigan", "Huron", "Erie", "Ontario", "St.Clair"};
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
		
	for(j = 0; j < 6; j++){
		sum = 0;

	for(i = 0; i < 365; i++){
		sum = sum + temp[i][j + 2];
		average[j] = sum / 365;
	}
	printf("The yearly average temperature for Lake %s is %0.2lf C \n", lake[j], average[j]);
	}
	
	for(i = 0; i < 6; i++){
		totalAverage = totalAverage + average[i];
	}
	totalAverage = totalAverage / 6;
	
	printf("The yearly average temperature for all of the lakes together is %0.2lf C \n", totalAverage);
		
}

