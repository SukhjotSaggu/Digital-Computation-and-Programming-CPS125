#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, k = 0, m = 0, w =0, swim = 0, frozen = 0;
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
		frozen = 0;

	for(i = 0; i < 365; i++){
		if(temp[i][j + 2] < 0){
			frozen = frozen + 1;
		}
	}
	printf("The number of days Lake %s is frozen is %d \n", lake[j], frozen);
	}
}

