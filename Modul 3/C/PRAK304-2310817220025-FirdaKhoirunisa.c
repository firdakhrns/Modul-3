#include <stdio.h>

int main(){
    int bil;
    printf("Input\n");
    scanf("%d", &bil);

    printf("\nOutput\n");
    if(bil == 0){
        printf("Nol");
    }if(bil > 0 && bil <= 10){
        printf("Satuan");
    }if(bil > 10 && bil < 20){
        printf("Belasan");
    }if(bil >= 20 && bil < 100){
        printf("Puluhan");
    }if(bil >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}