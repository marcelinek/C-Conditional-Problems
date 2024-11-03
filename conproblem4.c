#include <stdio.h>

int main(){

    int sayi;

    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 6 == 0){

        printf("girilen sayi 6'nin katidir.");
    }
    
    else {

        printf("girilen sayi 6'nin kati degildir.");
    }

    return(0);
}