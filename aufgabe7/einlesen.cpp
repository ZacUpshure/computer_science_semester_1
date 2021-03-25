#include <stdio.h>
#define CLEAR_LINE printf_s("\033[K")
#define POSITION(Ze, Sp) printf_s("\033[%d;%dH", Ze, Sp)

int einlesen(unsigned char* einlesen)
{
	int error = 0;
	int zeichenMenge = 0;
	unsigned char zeichen;
	char dummy;

	do {
		einlesen -= zeichenMenge;
		zeichenMenge = 0;

		if (error == 1)
		{
			POSITION(8, 0);
			CLEAR_LINE;
			printf_s("WARNUNG zu viele Zeichen");
		}

		error = 0;
		POSITION(7, 0);
		CLEAR_LINE;
		printf_s("Geben sie einen Text ein:");
		do {
			POSITION(7, 27);

			zeichenMenge = 0;
			while ((zeichen = getchar()) != '\n')
			{
				*einlesen = zeichen;
				einlesen += 1;
				zeichenMenge++;
			}
		} while (zeichenMenge < 1);

		if (zeichenMenge > 99)
		{
			error++;
		}
		printf_s("\n\n");
	} while (error > 0);

	return zeichenMenge;
}