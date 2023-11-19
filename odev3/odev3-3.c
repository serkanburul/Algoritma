#include <stdio.h>
int main() {
    int x,y,z;
    printf("Ilk Tam Sayiyi Giriniz: ");
    scanf("%d",&x);
    printf("Ikinci Tam Sayiyi Giriniz: ");
    scanf("%d",&y);
    printf("Ucuncu Tam Sayiyi Giriniz: ");
    scanf("%d",&z);
    if (x>=y && x>=z) {
        printf("Girdiginiz En Buyuk Sayi: %d",x);
    }
    else if (y>=x && y>=z) {
        printf("Girdiginiz En Buyuk Sayi: %d",y);
    }
    else{
        printf("Girdiginiz En Buyuk Sayi: %d",z);
    }
    return 0;
}