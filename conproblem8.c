#include <stdio.h>

int main(){

    int gun;

     printf("gun numarasini giriniz: ");
    scanf("%d", &gun);

    if(gun == 1)
    {
        printf("pazartesi");
    }
    else if(gun == 2)
    {
        printf("sali");
    }
    else if(gun == 3) 
    {
        printf("carsamba");
    }
    else if(gun == 4) 
    {
        printf("persembe");
    }
    else if(gun == 5)
    {
        printf("cuma");
    }
    else if(gun == 6) 
    {
        printf("cumartesi");
    }
    else if(gun == 7) 
    {
        printf("pazar");
    }
    else 
    {
        printf("hatali giris");
    }

    return (0);
}