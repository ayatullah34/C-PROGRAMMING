#include<stdio.h>

integerpower(int base,int exponent){
int i,power=1,number;

for(i=1;i<=exponent;i++){
power=power*base;

}

return power;
}

int main(){

int a,b;
scanf("%d %d",&a,&b);
printf("%d",integerpower(a,b));




return 0;

}
