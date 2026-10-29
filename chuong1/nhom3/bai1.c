#include <stdio.h>
int main()
{
	float diem;
	printf("nhap diem trung binh: ");
	scanf("%f",&diem);
	if (diem < 0 || diem > 10)
		printf("diem khong hop le");
	else if (diem<4)
		printf("hoc luc yeu");
		else if (4<diem && diem<5.4)
			printf("hoc luc trung binh");
		else if (diem>5.5 && diem<6.9)
				printf("hoc luc kha");
		else if (diem>7 && diem<8.4)
					printf("hoc luc gioi");
		else if (diem>8.5 && diem<10)
						printf("hoc luc xuat sac");
	return 0;
}
