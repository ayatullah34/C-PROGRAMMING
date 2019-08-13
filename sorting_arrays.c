#include<stdio.h>
#define SIZE 9
int main()
{
int dizi[SIZE]={1,3,2,5,0,12,32,2,4};	
int i,j,gecici;

for( j=1;j<SIZE;j++){
	for(i=0;i<SIZE-1;i++ ){
		
		if(dizi[i]>dizi[i+1]){
		gecici=dizi[i];
		dizi[i]=dizi[i+1];
		dizi[i+1]=gecici;
	}
	}
}	
for(i=0;i<SIZE;i++){
	printf("%d ",dizi[i]);
}
	
	return 0;
}
