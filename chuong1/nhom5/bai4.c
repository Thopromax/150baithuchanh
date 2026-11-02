#include <stdio.h>
int main() {
    int a,b,r;
    printf("nhap hai so nguyen duong a va b: ");
    scanf("%d %d",&a,&b);
    int tempA=a;
    int tempB=b;
    if (a <0 || b <0){
        printf("vui long nhap hai so nguyen duong");}
    while(tempB!=0){
        r=tempA%tempB;
        tempA=tempB;
        tempB=r;
    }
    printf("UCLN cua %d va %d la: %d",a,b,tempA);
    return 0;
}