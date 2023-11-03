#include <stdio.h>

int main(){
    int satu, dua;
    printf("Input\n");
    scanf("%d %d", &satu, &dua);

    int rendah, tinggi;
    if(satu <= dua){
        rendah = satu;
        tinggi = dua;
    }else{
        rendah = dua;
        tinggi = satu;
    }
    printf("\nOutput\n");
    printf("%d %d", rendah, tinggi);

    return 0;
}