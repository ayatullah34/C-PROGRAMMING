#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int turn(){

int h=rand()%2;

if(h==0)
printf("tails\t");

else
printf("heals\t");


return h;
}

int main(){
srand(time(NULL));

int i;
int head=0;
int tail=0;

for(i=1;i<=100;i++){

if(turn()==0)
tail++;

else
head++;

if(i%10==0){

printf("\n");
}

}
printf("The total number of Heads was %d\n",head);

printf("The total number of Tails was %d\n",tail);

return 0;
}




