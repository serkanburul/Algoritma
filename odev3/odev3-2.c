#include <stdio.h>
int main() {
    int x;
    printf("Haftanin Kacinci Gununu Gormek Istiyorsunuz ? : ");
    scanf("%d",&x);
    switch (x) {
    case 1:
        printf("Haftanin %d. Gunu Pazartesi",x);
        break;
    case 2:
        printf("Haftanin %d. Gunu Sali",x);
        break;
    case 3:
        printf("Haftanin %d. Gunu Carsamba",x);
        break;
    case 4:
        printf("Haftanin %d. Gunu Persembe",x);
        break;
    case 5:
        printf("Haftanin %d. Gunu Cuma",x);
        break;
    case 6:
        printf("Haftanin %d. Gunu Cumatesi",x);
        break;
    case 7:
        printf("Haftanin %d. Gunu Pazar",x);
        break;
    }
    return 0;
}