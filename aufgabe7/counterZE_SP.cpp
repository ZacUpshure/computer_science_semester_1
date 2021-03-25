#include <stdio.h>
int counterZE_SP(int* counterZE, int* counterSP, int zeichenLaenge, unsigned char* eingabe)
{
	int counter = 0;

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
			*counterZE += 1;
			if (counter % 4 == 0)
			{
				*counterSP += 1;
			}
			counter++;
		}
	}
	return 0;
}