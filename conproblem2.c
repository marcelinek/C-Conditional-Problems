#include <stdio.h>

int main (){

    int sayi;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0) {

        sayi = sayi * (-1);
    }

    printf("girilen sayinin mutlak degeri: %d", sayi);

    return(0);
}