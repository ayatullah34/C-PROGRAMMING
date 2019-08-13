#include<stdio.h>
#include<string.h>
int main(){

char arr[5][4];
for(int i=0;i<5;i++){
scanf("%s",arr[i]);
}
char temp[9];
int i,j;

for ( i=0; i<5; i++)
{
for ( j=0; j<4; j++)
{
if (  strcmp(  arr[j], arr[j+1]  )  > 0 ) 
{
strcpy(  temp  , arr[j+1]  );
strcpy(  arr[j+1]  ,  arr[j]  );
strcpy(  arr[j]  ,  temp  );
}
}
        
}

for(int i=0;i<5;i++)

{
printf("%s\n", arr[i]);

}


return 0;
}
