#include <stdio.h>
int main() {
    float diem;
    do{ 
        printf("nhap so diem(0-10): ");
        scanf("%f",&diem);
        if (diem<0 || diem>10){
         printf("diem khong hop le nhap lai\n");}
    }
    while (diem<0 || diem>10);
      printf("diem hop le nhap la: %.2f\n", diem);
    return 0;
}