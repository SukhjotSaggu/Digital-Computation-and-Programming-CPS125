#include <stdio.h>

void av_temp(double arr[365][8], int n, char *str[], double *sto);

int main(int argc, char **argv)
{
	int i, j, k = 0, m = 0, w =0;
	double temp[365][8], average[6], totalAverage = 0, num, sum, warmest = 0, coldest = 0;
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
	
	for(i = 0; i < 5; i++){	   
		if(average[i] < coldest){
			coldest = average[i];
			cold = lake[i]; 
		}
		if(average[i] > warmest){
				warmest = average[i];
				warm = lake[i];	  	  
			}
	}
	
	cold = lake[0];
	coldest = temp[0][j + 2];
		 
	for(j = 0; j < 6;j++){
	dayNum = 0;
	m = 0;
	k =0;
	month = months[0];
		for(i = 0;i < 365; i++){
			if(temp[i][j + 2] < coldest){
				coldest = temp[i][j + 2];
				cold = lake[j];
				dayNum = temp[i][1];
			}
		}
		remainingDays = dayNum;	
		for(i = 0; i <= dayNum; i++){
		
			if(k == days[m]){
			k = days[m];
			m++;
			month = months[m];
			remainingDays = remainingDays - k;
			k = 0;
			}
		k++;
	}	   	      
	}
	printf("The coldest day in Lake %s is %0.2lf C on %s %d\n", cold, coldest, month, remainingDays);
		printf("\n");
				
		for(j = 0; j < 6;j++){	  
	dayNum = 0;
	m = 0;
	k =0;
	month = months[0];
		for(i = 0;i < 365; i++){
			if(temp[i][j + 2] > warmest){
				warmest = temp[i][j + 2];
				warm = lake[j];
				dayNum = temp[i][1];
			}
		}
		remainingDays = dayNum;	
		for(i = 0; i <= dayNum; i++){
			if(k == days[m]){
			k = days[m];
			m++;
			month = months[m];
			remainingDays =remainingDays - k;
			k = 0;
			}
		k++;
	}	   	      
	}
	printf("The warmest day in Lake %s is %0.2lf C on %s %d\n", warm, warmest, month, remainingDays);
}

