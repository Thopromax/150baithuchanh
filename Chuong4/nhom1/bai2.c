#include <stdio.h>
int main(){
    int n,a[100],i,tong=0;
    float trungbinh;
    printf("nhap n: "); scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);    }    
        for (i=0;i<n;i++){
            tong+=a[i];
        }
        trungbinh=tong/n;
        printf("trung binh cong cua mang vua nhap la: %f\n",trungbinh);
        printf("tong cua mang vua nhap la: %d\n",tong);
return 0;}        
