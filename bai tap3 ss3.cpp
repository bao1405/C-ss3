#include<stdio.h>

#include <conio.h>

int main()

{

float toan, van, anh,e,f;

printf("n-nhap so diem toan = ");

scanf("%f",&toan);

printf("n-Nhap so diem van  = ");

scanf("%f",&van);

printf("n-Nhap so anh   = ");

scanf("%f",&anh);

e=toan+van+anh;

printf("na * Tong cua 3 so vua nhap vao = %.2f",e);

f=(toan+van+anh)/3;

printf("n * Trung binh cong cua 3 so la = %.2f",f);

getch();

}
