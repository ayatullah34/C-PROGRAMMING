#include<stdio.h>

float fehrenhei_t(int i)
{
 float fehrenheit;

fehrenheit=i*1.8+32;

return (int)fehrenheit;

}

float celciu_s(int j)
{

float celcius;

celcius=((j-32)/(1.8));

return (int)celcius;

}

int main(){

int j,i;

printf("Celsius          Fahrenheit\n");
for(i=0;i<=100;i++){

printf("%d\t\t%.0f\n",i,fehrenhei_t(i));

}

printf(" Fahrenheit       Celcius\n");

for(j=32;j<=212;j++){

printf("%d\t\t%.0f\n",j,celciu_s(j));
}





return 0;
}
