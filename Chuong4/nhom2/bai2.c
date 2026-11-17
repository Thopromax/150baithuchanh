#include <stdio.h>
int main(){
    int n,a[100],i,x,dem=0;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
        printf(" nhap gia tri x: "); scanf("%d",&x);
    for (i=0;i<n;i++){
        if (a[i]==x)
           dem++;}
    printf("so lan xuat hien cua %d trong mang la: %d\n",x,dem);
    return 0;
  }