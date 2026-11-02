#include <stdio.h>
int main(){
    int n;
    long long giaithua=1;
    printf("nhap so nguyen n: ");scanf("%d",&n);
    int i=n;
    while (i>0){
        giaithua*=i;
        i--;
    }
    printf("giai thua cua %d la: %lld", n, giaithua);
    return 0;
}