#include<stdio.h>
#define BOYUT 10
int lineersearch(int array[],int boyut,int key){
	int i;
	for(i=0;i<BOYUT;i++){
		if(array[i]==key){
			return i;
		}
		}
		return -1;

}


int main(){
	int key=2112;
    int A[BOYUT]={1,3,4,345,32,23,21,2112};
	int result;
	result=lineersearch(A,BOYUT,key);
	
	if(result!=-1)
	printf("position:%d",result);
	else
	printf("not found");

	
	return 0;
	}
