#include <stdio.h>
int main(){
    int n,a[100],i,x;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
        printf(" nhap gia tri x: "); scanf("%d",&x);
    for (i=0;i<n;i++){
        if (a[i]==x)
            printf("phan tu %d co trong mang\n",x);
        else
            printf("khong tim thay %d \n",x);}
    return 0;
  }