#include <stdio.h>
int main()
{
	int thang;
	printf("nhap vao thang ");
	scanf("%d",&thang);
	switch (thang) {
		case 1: case 2: case 3:
			printf("MUA XUAN");break;
		case 4: case 5: case 6:
			printf("MUA HA");break;
		case 7: case 8: case 9:
			printf("MUA THU");break;
		case 10: case 11: case 12:
			printf("MUA DONG");break;
		default:printf("so thang khong hop le");}
		return 0;
	}

