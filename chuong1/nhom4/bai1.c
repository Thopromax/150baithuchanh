#include <stdio.h>
int main(){
    int n,tong=0;
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        tong= tong +i;
        printf("tong cac so tu 1 den n la: %d\n",tong);
    }
    return 0;
}