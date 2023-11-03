#include <stdio.h>

int main(){
    int angka;
    printf("Input\n");
    scanf("%d", &angka);

    printf("\nOutput\n");
    if (angka >= 80){
        printf("A");
    }if (angka < 80 && angka >= 70){
        printf("B");
    }if (angka < 70 && angka >= 60){
        printf("C");
    }if (angka < 60 && angka >= 50){
        printf("D");
    }if (angka < 50){
        printf("E");
    }
    return 0;
}