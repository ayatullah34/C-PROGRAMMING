#include<stdio.h>
int main(){

int i,j,dizi[11];
int gecici=0;
int new;

for(i=0;i<10;i++){

scanf("%d",&dizi[i]);

}


for(i=1;i<10;i++){

for(j=0;j<9;j++){

if(dizi[j]>dizi[j+1]){
gecici=dizi[j];
dizi[j]=dizi[j+1];
dizi[j+1]=gecici;

}
}
}

scanf("%d",&new);
dizi[10]=new;

for(i=0;i<11;i++){

for(j=0;j<10;j++){

if(dizi[j]>dizi[j+1]){
gecici=dizi[j];
dizi[j]=dizi[j+1];
dizi[j+1]=gecici;
}
}
}


for(i=0;i<11;i++){

printf("%d ",dizi[i]);

}


return 0;
}
