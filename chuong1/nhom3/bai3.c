#include <stdio.h>
#include <math.h>
int main()
{
	float st1,st2,ketqua;
	char pheptinh;
	printf("nhap so thu tu 1: ");scanf("%f",&st1);
	printf("nhap so thu tu 2: ");scanf("%f",&st2);
	printf("nhap phep tinh: ");scanf(" %c",&pheptinh);
	switch (pheptinh){
		case '+':
			ketqua=st1+st2;
			printf("tong la %f \n",ketqua);break;
		case '-':
			ketqua=st1-st2;
			printf("hieu la %f \n",ketqua);break;
		case '*':
			ketqua=st1*st2;
			printf("tich la %f \n",ketqua);break;
		case '/':
			ketqua=st1/st2;
			printf("thuong la %0.2f \n",ketqua);break;
		default:printf("phep tinh ko hop le");}
		return 0;
}
