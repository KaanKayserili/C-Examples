#include <stdio.h>
#include <conio.h>
int main()
{
int sayi,toplam,k,ilksayi;
printf("Sayiyi giriniz..:");
scanf("%d",&sayi);
toplam=0;
ilksayi=sayi;
while (sayi>0)
{
k= sayi % 10;
sayi=sayi/10;
toplam=toplam+k;
} 
printf("%d sayisinin Rakamlari toplami..:%d  dir ",ilksayi,toplam);
getch();
}
