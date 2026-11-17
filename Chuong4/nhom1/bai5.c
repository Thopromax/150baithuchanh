#include <stdio.h>
int main(){
    int n,a[100],i;
    int chan=0,le=0;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
    for (i=0;i<n;i++){
        if (a[i]%2==0)
            chan++;
        else
            le++;}
            printf("so phan tu chan la: %d\n",chan);
            printf("so phan tu le la: %d\n",le);
    return 0;
  }