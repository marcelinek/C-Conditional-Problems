#include <stdio.h>

int main(){

    int A, B, C;

    printf("Lutfen A Kenarinin Uzunlugunu Giriniz: "); 
    scanf("%d", &A);

    printf("Lutfen B Kenarinin Uzunlugunu Giriniz: "); 
    scanf("%d", &B); 

    printf("Lutfen C Kenarinin Uzunlugunu Giriniz: ");
    scanf("%d", &C);

    A = A * A;
    B = B * B;
    C = C * C;

    if(A + B == C)
    {
        printf("Dik Ucgen Cizilebilir."); 
    }
    else
    {
        printf("Dik Ucgen Cizilemez.");
    }

    return (0);
}