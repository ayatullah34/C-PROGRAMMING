#include<stdio.h>

int main(){

int n;
int max1=0,max2=0;

while(n!=-1){
scanf("%d",&n);
if(n>max1){
max2=max1;
max1=n;
}
 if(n>max2){
max2 = n;
} 


}
printf("%d %d",max1,max2);



return 0;
}
