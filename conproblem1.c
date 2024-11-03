#include <stdio.h>

int main(){

    int sayi;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0){

        printf("sayi negatif!");

    }

    if (sayi == 0){

        printf("sayi sifirdir!");
    }

    if (sayi > 0){

        printf("sayi pozitiftir!");
    }

    return (0);
}