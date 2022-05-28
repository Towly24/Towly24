#include<stdio.h>
#include<math.h>
#include "func.h"
int main(){
	float a,b,c,p;
	printf("Nhap canh a= ");
	scanf("%f",&a);
	printf("Nhap canh b= ");
	scanf("%f",&b);
	printf("Nhap canh c= ");
	scanf("%f",&c);
	if (a >= b + c || b >= a + c || c >= a + b){
		printf("Ba canh vua nhap khong phai la canh cua tam giac");
	}else{
		printf("Chu vi cua tam giac la: %f ",chuvi(a,b,c));
		printf("\nDien tich cua tam giac la: %f",dientich(a,b,c,p));
	}
	return 0;
}

