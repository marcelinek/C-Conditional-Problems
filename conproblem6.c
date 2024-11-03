#include <stdio.h>

int main(){

    int cocuksayisi;
    float maas;

    printf("maas degerini giriniz: ");
    scanf("%f", &maas);

    printf("cocuk sayisini giriniz: ");
    scanf("%d", &cocuksayisi);

    if (cocuksayisi < 0){

        printf("hatali giris!");
        return(1);
    }

    if (cocuksayisi == 0)
    {
        printf("guncel maas miktari: %.2f", maas);
    }
    
    else if (cocuksayisi == 1){

        maas = (maas * 105) / 100;
        printf("guncel maas miktari: %.2f", maas);
    }

    else if (cocuksayisi == 2){

        maas = (maas * 110) / 100;
        printf("guncel maas miktari: %.2f", maas);
    }

    else{

        maas = (maas * 115) / 100;
        printf("guncel maas miktari: %.2f", maas);
    }


    return(0);
}