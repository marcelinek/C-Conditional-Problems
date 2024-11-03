#include <stdio.h>

int main(){

    int sayi1, sayi2, sayi3, minsayi;

    printf("birinci sayiyi giriiz: ");
    scanf("%d", &sayi1);

    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    minsayi = sayi1;

    if (sayi2 < minsayi){

        minsayi = sayi2;
    }

    if (sayi3 < minsayi){

        minsayi = sayi3;
    }

    printf("girilen sayilarin en kucucugu: %d", minsayi);

    return(0);
}