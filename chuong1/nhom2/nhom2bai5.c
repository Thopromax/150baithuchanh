#include <stdio.h>
int main ()
{
    int a;
    printf("nhap mot so nguyen: ");scanf("%d",&a);
    if (a>0)
        printf("a duong ",a);
    else if (a==0)
        printf("a bang 0 ",a);
    else if (a<0)
        printf("a am ",a);
    return 0;
}