#include <stdio.h>
int main(){
    int n,a[100],i,max,min;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
    max=a[0];
    min=a[0];    
    for (i=0;i<n;i++){
       if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];    }
            printf("gia tri lon nhat cua mang la: %d\n",max);
            printf("gia tri nho nhat cua mang la: %d\n",min);        
    return 0;}