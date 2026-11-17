#include <stdio.h>
int main(){
    int n,a[100],i;
    int duong,am,khong;
    duong=0; am=0; khong=0;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
    for (i=0;i<n;i++){
        if (a[i]>0)
            duong++;
        else if (a[i]<0)
            am++;
             else if (a[i]==0)
            khong++;}
            printf("so phan tu duong la: %d\n",duong);
            printf("so phan tu am la: %d\n",am);
            printf("so phan tu khong la: %d\n",khong);
    return 0;
  }