#include <stdio.h>

int main(void)
{
    float a;

    printf("Nhap diem thi: ");
    scanf("%f", &a);

    if (a >= 5.0f) {
        printf("Dau %.1f\n", a);
    } else {
        printf("Rot %.1f\n", a);
    }

    return 0;
}
