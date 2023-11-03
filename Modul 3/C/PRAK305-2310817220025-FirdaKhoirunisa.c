#include <stdio.h>

int main(){
    int waktu;
    printf("Input\n");
    scanf("%d", &waktu);

    int hari = waktu/(24*3600);
    int jam = waktu/3600;
    int detik = waktu%60;
    int waktu1 = waktu%3600;
    int menit = waktu1/60;

    printf("\nOutput\n");
    if(jam <= 24){
        printf("%02d:%02d:%02d", jam, menit, detik);
    }if(jam > 24){
        jam = jam - 24;
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }
    return 0;
}