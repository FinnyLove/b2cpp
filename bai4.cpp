#include<stdio.h>
#include<conio.h>

struct Diem;
{
	float x;
	float y;
	float z;
};
typeoff struct Diem KIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);
void NhapDiem(DIEM &D)
{
	float temp;
	printf("\nNhap x: ");
	scanf("%f", &temp);
	d.x = temp;

	printf("\nNhap y: ");
	scanf("%f", &temp);
	d.y = temp;

	printf("\nNhap z: ");
	scanf("%f", &temp);
	d.z = temp;
}

void XuatDiemKG(DIEMKG d)
{
	printf("(%8.3f, %8.3f, %8.3f)", d.x, d.y, d.z);
}

int main()
{
	DiemKG d;
	NhapDiemKG(d);
	XuatDiemKG(d);

	getch();
	return 0;
}
