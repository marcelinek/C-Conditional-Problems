#include <stdio.h>

int main(){

    int vize, final;
    float ortalama;

    printf("vize notunu giriniz: ");
    scanf("%d", &vize);

    printf("final notunu giriniz: ");
    scanf("%d", &final);

    ortalama = (vize * 0.4) + (final * 0.6);

    if (ortalama < 55){

        printf("dersten kaldiniz. ortalamaniz: %2.f", ortalama);
    }

    else{

        printf("dersten gectiniz. ortalamaniz: %2.f", ortalama);
    }
    return(0);
}