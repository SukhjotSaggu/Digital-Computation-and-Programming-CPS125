#include <stdio.h>

void av_temp(double arr[365][8],int n, char *str[], double *sto);

int main(int argc, char **argv)
{

int j,k,warm=0,cold=0;
double temp[365][8], x, coldest,warmest,average, av_lake_temp[3][6];
char *lake[]={"Superior","Michigan","Huron","Erie","Ontario","St.Clair"};
FILE *data;
data = fopen("data.txt","r");
for(j=0; j<365; j++){
for(k=0;k<8;k++){
fscanf(data,"%lf",&x);
temp[j][k]=x;
}
}
fclose(data);
for(j=0; j<365; j++){
for(k=0;k<8;k++){
printf("%6.2lf ",temp[j][k]);
}
printf("\n");
}
printf("\n");
for(j=0; j<6; j++)
av_temp(temp,j,lake,&av_lake_temp[0][j]);
printf("\n");

}

void av_temp(double arr[365][8],int n, char *str[], double *sto){
int j;
double sum=0.0;
for(j=0; j<365; j++){
sum = sum+arr[j][n+2];
}
printf("The average yearly temperature of lake %s is %lf. \n",str[n],sum/j);
*sto=sum/j;
}

