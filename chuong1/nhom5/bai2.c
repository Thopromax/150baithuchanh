#include <stdio.h>
int main() {
    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d",&n);
    int dem = 0;
    int temp = n;
    while (temp > 0) {
        dem++;
        temp /= 10; 
    }
    printf("So %d co %d chu so.\n", n, dem);
    return 0;
}