#include<stdio.h>

int main(){

int n,i=0;
int a,b,c,d,e;
scanf("%d",&n);
a=(n%10);
b=(n%100)/10;
c=(n%1000)/100;
d=(n%10000)/1000;
e=(n%100000)/10000;

if(a==e && b==d){
printf("1");
}
else
printf("0");



return 0;
}

