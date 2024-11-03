#include <stdio.h>

int main(){

    float sayi1, sayi2;
    char islem;

    printf("birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    printf("yapacaginiz islemi giriniz (+.-.*./): ");
    scanf(" %c", &islem);

    if(islem == '+'){

        printf("girilen sayilarin toplami: %.2f", sayi1 + sayi2);
    }

    else if(islem == '-'){

        printf("girilen sayilarin farki: %.2f", sayi1 - sayi2);
    }

    else if(islem == '*'){

        printf("girilen sayilarin carpimi: %.2f", sayi1 * sayi2);
    }

    else if(islem == '/'){

        printf("girilen sayilarin bolumu: %.2f", sayi1 / sayi2);
    }

    else
    {
        printf("hatali islem!");
    }

    return(0);
}