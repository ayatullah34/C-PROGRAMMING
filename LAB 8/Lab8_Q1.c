#include<stdio.h>

int main (){
char sentence[300];  
int i,j,l,count[10]={0}; 
i=0;

while( (   sentence[i]  = getchar()  )  !=  '.')
{
if(sentence[i]=='a')
{
count[0]++;
} 
if(sentence[i]=='e')
{
count[1]++;
}
if(sentence[i]=='i'){
count[2]++;
}
if(sentence[i]=='o')
{
count[3]++;
}
if(sentence[i]=='u')
{	
count[4]++;
}
i++;
    
}
for(j=0;j<5;j++)
{
printf("%d",j);

for(l=0;l<count[j];l++)
{
printf("*");
}
printf("\n");
}
return 0;}
