#include<stdio.h>
#include<conio.h>
#include<locale.h>  // Türkçe dil desteði için gerekli!
 
int main (){
    
    setlocale(LC_ALL,"Turkish");  // Türkçe dil desteðini ekler
 
    int i , j, sinir;
    double pi;  
 
    pi=0.0;   // pi nin baþlangýcýnýn 0 olmasý çok önemli  
    j=1;     // 4/j formatýnda yazýlacaðýndan j 1 ile baþlýyor
    
    printf("bir sýnýr deðeri belirleyiniz: ");
    scanf("%d",&sinir);
// Sýnýr deðeri yükseldikçe pi sayýsýna yakýn deðerler buluruz    
    for(i=0 ; i<sinir ; i++){   
    
    // i çift olduðu zamanlar toplama iþlemi yapýlýr    
        if(i%2==0){
            pi=pi+4.0/j    ;    
                        
        }
    // i tek ise çýkarma iþlemi yapýlýr    
        else{
            pi=pi-4.0/j;
        }
        // j sabit olarak sürekli 2 artýrýlýr
        j+=2;
        
        
    }
    printf("%lf",pi); // pi double olduðu için %d kullanýlamaz!!!
    
    
    getch();
    return 0;
}
