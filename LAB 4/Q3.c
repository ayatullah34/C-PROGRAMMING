 #include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int a;
int number=0;
int guess=0;
int counter=0;
srand(time(NULL));
do{

number=rand()%1000+1;

printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your First guess.\n");

scanf("%d", &guess);

while(guess!=number){

if(guess<number){
printf("Two low.Try again\n");
scanf("%d", &guess);

//counter++; 
 }

if(guess>number){

printf("Two high.Try again\n");
scanf("%d", &guess);

//counter++;  
 }

if(guess==number){

printf("Excellent! You guessed the number!\n");
}
}

printf("Would you like to play again (y or n)?\n");
printf("please type(1=yes,2=no)?\n");

scanf("%d",&a);
}
while(a==1);

return 0;
} 

