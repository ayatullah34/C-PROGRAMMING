#include<stdio.h>
#include<conio.h>
#include<locale.h>  // T�rk�e dil deste�i i�in gerekli!
 
int main (){
    
    setlocale(LC_ALL,"Turkish");  // T�rk�e dil deste�ini ekler
 
    int i , j, sinir;
    double pi;  
 
    pi=0.0;   // pi nin ba�lang�c�n�n 0 olmas� �ok �nemli  
    j=1;     // 4/j format�nda yaz�laca��ndan j 1 ile ba�l�yor
    
    printf("bir s�n�r de�eri belirleyiniz: ");
    scanf("%d",&sinir);
// S�n�r de�eri y�kseldik�e pi say�s�na yak�n de�erler buluruz    
    for(i=0 ; i<sinir ; i++){   
    
    // i �ift oldu�u zamanlar toplama i�lemi yap�l�r    
        if(i%2==0){
            pi=pi+4.0/j    ;    
                        
        }
    // i tek ise ��karma i�lemi yap�l�r    
        else{
            pi=pi-4.0/j;
        }
        // j sabit olarak s�rekli 2 art�r�l�r
        j+=2;
        
        
    }
    printf("%lf",pi); // pi double oldu�u i�in %d kullan�lamaz!!!
    
    
    getch();
    return 0;
}
