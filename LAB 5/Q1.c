#include<stdio.h>
int main(){

int response[40];


int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;

int i,b,t=0,y=0;

for(i=0;i<40;i++){

scanf("%d",&response[i]);
}

while(t<40){

b=response[t];

switch(b){

case 1:
c1++;
break;

case 2:
c2++;
break;

case 3:
c3++;
break;

case 4:
c4++;
break;

case 5:
c5++;
break;

case 6:
c6++;
break;

case 7:
c7++;
break;

case 8:
c8++;
break;

case 9:
c9++;
break;

case 10:
c10++;
break;

}

t++;


}

printf("1\t%d\n",c1);
printf("2\t%d\n",c2);
printf("3\t%d\n",c3);
printf("4\t%d\n",c4);
printf("5\t%d\n",c5);
printf("6\t%d\n",c6);
printf("7\t%d\n",c7);
printf("8\t%d\n",c8);
printf("9\t%d\n",c9);
printf("10\t%d\n",c10);





return 0;
}
