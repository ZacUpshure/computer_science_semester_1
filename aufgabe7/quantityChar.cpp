#include <stdio.h>
#define POSITION(Ze, Sp) printf_s("\033[%d;%dH", Ze, Sp)

int quantityChar(int* zeileAusgabe, int zeichenLaenge, unsigned char* eingabe)
{
	int counter = 1;
	for (int ascii = 0; ascii < 256; ascii++)
	{
		int mengeZeichen = 0;
		unsigned char zeichen = 0 + ascii;
		int PosAr = 0;
		for (int i = 0; i < zeichenLaenge; i++)
		{
			PosAr++;
			if (*eingabe == 0 + ascii)
			{
				mengeZeichen++;
			}
			eingabe += 1;
		}

		eingabe -= PosAr;

		if (mengeZeichen > 0)
		{
			char space = ' ';
			if (zeichen < 32)
			{
				printf_s("%c (%#x) %d\t", space, zeichen, mengeZeichen);
			}
			else
			{
				printf_s("%c (%#x) %d\t", zeichen, zeichen, mengeZeichen);
			}
			if (counter % 4 == 0)
			{
				POSITION(13 + *zeileAusgabe, 2);
				*zeileAusgabe += 1;
			}
			counter++;
		}
	}
}