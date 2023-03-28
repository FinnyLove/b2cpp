#include <stdio.h>
#include <conio.h>
struct HonSo
{
   	int TuSo;
   	int MauSo;
    	int SoNguyen;
};
typedef struct HonSo HONSO;
void Nhaphonso(HONSO &);
void XuatHonSo(HONSO);
void NhapHonSo(HONSO &h)
{
    	printf("Nhap tu so: ");
	scanf("%d", &h.Tu);
    
    	printf("Nhap mau so: ");
	scanf("%d", &h.Mau);

   	printf("Nhap so nguyen: ");
	scanf("%d", &h.Nguyen);
}
void XuatHonSo(HONSO hs)
{
	printf("%d(%d/%d)", h.Nguyen, h.Tu, h.Mau);
}
int main()
{
	HONSO hs;
	NhapHonSo(hs);
	XuatHonSo(hs);
	return 0;
}
