#include <stdio.h>
int main(){
    int n,a[100],i,j,dao=0;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
    for (j=0;j<n/2;j++){
        dao=a[j];
        a[j]=a[n-1-j];
        a[n-1-j]=dao;
    }
    printf("so dao nguoc cua mang vua nhap la: ");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
  }