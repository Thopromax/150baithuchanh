#include <stdio.h>
int main(){
    int n,dem=0;
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if (i%2==0){
            dem++;
        }
    }
    printf("so luong so chan tu 1 den %d la: %d\n", n, dem);
    return 0;
}