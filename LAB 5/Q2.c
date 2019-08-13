#include<stdio.h>
int main(){

int lowest=0,highest=0,i,j;

float average1,average2,average3,average4,average5,sum=0;

int grades[5][4];

for(i=0;i<5;i++){

for(j=0;j<4;j++){

scanf("%d",&grades[i][j]);
}
}

average1=0.1*grades[0][0]+0.1*grades[0][1]+0.3*grades[0][2]+0.5*grades[0][3];
average2=0.1*grades[1][0]+0.1*grades[1][1]+0.3*grades[1][2]+0.5*grades[1][3];
average3=0.1*grades[2][0]+0.1*grades[2][1]+0.3*grades[2][2]+0.5*grades[2][3];
average4=0.1*grades[3][0]+0.1*grades[3][1]+0.3*grades[3][2]+0.5*grades[3][3];
average5=0.1*grades[4][0]+0.1*grades[4][1]+0.3*grades[4][2]+0.5*grades[4][3];

lowest=grades[0][0];

for(i=0;i<5;i++){
for(j=0;j<4;j++){

if(grades[i][j]<lowest)
lowest=grades[i][j];

}
}

highest=grades[0][0];

for(i=0;i<5;i++){
for(j=0;j<4;j++){
if(highest<grades[i][j])
highest=grades[i][j];

}
}

printf("Lowest grade:%d\n",lowest);
printf("Highest grade:%d\n",highest);
printf("The average grade for student 0 is %.2f\n",average1);
printf("The average grade for student 1 is %.2f\n",average2);
printf("The average grade for student 2 is %.2f\n",average3);
printf("The average grade for student 3 is %.2f\n",average4);
printf("The average grade for student 4 is %.2f\n",average5);



return 0;
}
