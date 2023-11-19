#include <stdio.h>
int main(){
    int ilk=0,ikinci=1,son,n,i;
    printf("Fibonacci Dizisi Kacinci Terime Kadar Yazdirilsin: ");
    scanf("%d",&n);
    printf("===============\n");
    for (i=1; i<n+1; i++) {
        if (i==1){
            son = i;
        } else {
            son = ilk + ikinci;
            ilk = ikinci;
            ikinci = son;
        }
        printf("%d. Terim: %d\n",i,son);
    }
    printf("===============");
    return 0;
}