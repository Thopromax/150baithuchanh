#include <stdio.h>
int main ()
{
    int a;
    printf("nhap mot so nguyen: ");scanf("%d",&a);
    if (a%2==0)
        printf("a chan ",a);
    else
        printf("a le ",a);
    return 0;
}