#include <stdio.h>
#include <conio.h>
 
int main(){
    
    int adet, sayac = 0, toplam = 0, i;

    printf("Lütfen kontrol edilecek n degerini giriniz: ");
    scanf("%d", &adet);
    
    if( adet <= 1 ){  //1 ve 1'den küçük ise sonlandýr.
        printf("Lutfen 1 den buyuk deger giriniz!");
        getch();
        return 0;        
    }
    
    for ( i=1; i<=adet; i++ ){ 
        if( i % 2 == 0){
            toplam+=i;    
            sayac++;            
        }    
    }
    
    printf("Toplam= %dn", toplam);
    printf("Ortalama= %d", toplam / sayac);    
    
    getch();
    return 0;
    
}

