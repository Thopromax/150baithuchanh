#include <stdio.h>
int nguyento(int n){
	if (n<2)
		return 0;
	for (int i=2;i<=n/2;i++){
		if (n%i==0)
		return 0;}
	return 1;		
	}
int main(){
	int n;
	printf("nhap n ");scanf("%d",&n);
    printf("cac so nguyen to nho hon %d la: ",n);
	for (int i=2;i<=n;i++){
		if (nguyento(i)==1){
			printf("%d ",i);}
	}
	return 0;
}
