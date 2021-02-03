#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, k = 0, m = 0, w =0;
	double temp[365][8], average[6], totalAverage = 0, num, sum, warmest = 0, coldest = 0, hold = 0;
	char *lake[] = {"Superior", "Michigan", "Huron", "Erie", "Ontario", "St.Clair"};
	char *months[12]={"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31}, date, dayNum = 0, remainingDays = 0, newDays = 0;
	char *cold = "", *warm = "", *month = "";
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

	for(i = 0; i < 94; i++){
		sum = sum + temp[i + 171][j + 2];
		average[j] = sum / 93;
		}
	}
		
	for(j = 0; j < 6; j++){
	
		for(i = j + 1; i < 6; i++){
			if(average[j] < average[i]){
				hold = average[j];
				month = lake[j];
				average[j] = average[i];
				lake[j] = lake[i];
				average[i] = hold;
				lake[i] = month;
			}
		}
	}
	
	printf("The summer average from warmest to coldest is:\n");
	for(i = 0; i < 6; i++){
		printf("%s %0.2lf C \n", lake[i], average[i]);
	}
}
	

