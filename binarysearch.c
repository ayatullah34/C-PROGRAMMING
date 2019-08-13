#include<stdio.h>
#define SIZE 9
int binarysearch(int A[],int key,int low,int high){
	int middle;
	while(low<=high){
		middle=(low+high)/2;
		if(key==A[middle])
		return middle;
		else if(key<A[middle])
		high=middle-1;
		else
		low=middle+1;
	}
	return -1;
}

int main()
{
int array[5]={1,3,5,23,32};
int result=binarysearch(array,3,0,4);
if(result!=-1)
printf("%d",result);
else
printf("not found");
	return 0;
}
