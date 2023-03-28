#include<stdio.h>
#include<conio.h>

struct Diem
{
	int x;
	int y;
};

typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);
void NhapDiem(DIEM &d)
{
	int temp;
	printf("Nhap x: ");
	scanf("%f", &temp);
	d.x = temp;

	printf("Nhap y: ");
	scanf("%f", &temp);
	d.y = temp;
}

void XuatDiem(DIEM d)
{
	printf("(%8.3f, %8.3f)", d.x, d.y);
}

int main()
{
	DIEM d;
	NhapDiem(d);
	XuatDiem(d);
	return 0;
}