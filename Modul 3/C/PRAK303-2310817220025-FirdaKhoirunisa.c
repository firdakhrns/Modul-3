#include <stdio.h>

int main(){
    float angka;
    printf("Input\n");
    scanf("%f", &angka);

    printf("\nOutput\n");
    if(angka == 0){
        printf("nol");
    }
    if(angka < 0){
        printf("negatif");
    }
    if(angka > 0){
        printf("positif");
    }
    return 0;
}