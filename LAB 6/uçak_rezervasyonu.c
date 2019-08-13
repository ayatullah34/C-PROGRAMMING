#include<stdio.h>
int main(){
	int i=0,plane[11]={0},position[2],select,firstclass=1,economy=6;
	char response;
       while(i<10){
		
	printf("\n%s\n%s\n ","Please type 1 for \"first class\"","Please type 2 for \"economy\"");
    scanf("%d", &select);
    
            switch(select){
         	
	        case 1:
		     	if(firstclass<=5){
		     		
			    printf("Your seat assignment is %d in firstclass\n",firstclass);
				plane[firstclass++] = 1;
				i++;
				break;
	}
				else if(firstclass>5 && economy<=10){
					
				printf("The first class section is full.\n" );
       			printf("Would you like to sit in the economy" );
        		printf(" section ( Y or N )?\n" );
        		scanf("%s",&response);
        	
        		
				if (response=='Y') {
       			printf("Your seat assignment is %d in economy\n ", economy );
       			plane[economy++]=1;
      			i++;
				break;
		  }
 			 	else { 
				printf("Next flight leaves in 3 hours.\n");
				break;
			}
		}		
		        else{
		        printf("Next flight leaves in 3 hours.\n");
		        break;
	    }


			case 2:
			    if(economy<=10){
				printf("Your seat assignment is %d in economy\n",economy);
				plane[economy++]=1;
				i++;
				break;
		}
				else if(economy>10 && firstclass<=5){
				printf("The economy section is full.\n");
            	printf("Would you like to sit in first class");
            	printf(" section ( Y or N )?\n");
            	scanf("%s",&response);
            
            
        		if (response=='Y') {
        		printf("Your seat assignment is %d in firstclass\n",firstclass);
        		plane[firstclass++]=1;
        		i++;
        		break;
        }
           		else { 
				printf("Next flight leaves in 3 hours.\n");
				break;
			}
      }
                 else { 
				printf("Next flight leaves in 3 hours.\n");
				break;
			}
      
	}
		    
            
}
	
	
	printf("\nAll seats for this flight are sold.\n");
	return 0;
}
