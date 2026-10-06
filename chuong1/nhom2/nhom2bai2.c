#include <stdio.h>
int main ()
{
    float a,b,c,max;
    printf("nhap ba so thuc:        "); scanf("%f %f %f",&a,&b,&c);
    max=a;
    if (b>max)
          max=b;
    else if (c>max)
        max=c;
    printf("so lon nhat la: %f",max);
    return 0;
}