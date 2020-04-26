#include <stdio.h>
#include <conio.h>

char ch[17] = "0123456789ABCDEF";

void CetakBaseN(int base, int nilai)
{
	if (nilai == 0) //jika nilai sudah 0 maka keluar
		return;
	
	CetakBaseN(base, nilai / base);
	printf("%c", ch[nilai % base]);
}
void main(void)
{
	CetakBaseN(2, 255); printf("\n");
	CetakBaseN(8, 255); printf("\n");
	CetakBaseN(10, 255); printf("\n");
	CetakBaseN(16, 255); printf("\n");

	_getch();
}