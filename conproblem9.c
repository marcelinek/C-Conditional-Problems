#include <stdio.h>

int main(){

    float sayi1, sayi2, sayi3, sayi4, ortalama;

    printf("lutfen ilk sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("lutfen Ikinci Sayiyi Giriniz: ");
    scanf("%f", &sayi2);

    printf("Lutfen Ucuncu Sayiyi Giriniz: ");
    scanf("%f", &sayi3);

    printf("Lutfen Dorduncu Sayiyi Giriniz: ");
    scanf("%f", &sayi4);

    ortalama = (sayi1 + sayi2 + sayi3 + sayi4) / 4;

    printf("Ortalamadan Kucuk Sayilar: ");

    if(sayi1 < ortalama)
    {
        printf("%.2f ", sayi1);
    }
    
    if(sayi2 < ortalama)
    {
        printf("%.2f ", sayi2);
    }
    if(sayi3 < ortalama)
    {
        printf("%.2f ", sayi3);
    }
    if(sayi4 < ortalama) 
    {
        printf("%.2f ", sayi4);
    }

    printf("\nOrtalamadan Buyuk Sayilar: "); 

    if(sayi1 > ortalama) 
    {
        printf("%.2f ", sayi1);
    }
    if(sayi2 > ortalama)
    {
        printf("%.2f ", sayi2);
    }
    if(sayi3 > ortalama) 
    {
        printf("%.2f ", sayi3);
    }
    if(sayi4 > ortalama)
    {
        printf("%.2f ", sayi4);
    }

    printf("\nOrtalamaya Esit Sayilar: "); 

    if(sayi1 == ortalama) 
    {
        printf("%.2f ", sayi1);
    }
    if(sayi2 == ortalama)
    {
        printf("%.2f ", sayi2);
    }
    if(sayi3 == ortalama) 
    {
        printf("%.2f ", sayi3);
    }
    if(sayi4 == ortalama)
    {
        printf("%.2f ", sayi4);
    }

    return (0);
}