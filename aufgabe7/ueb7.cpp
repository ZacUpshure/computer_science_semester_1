#include <stdio.h>
#include "headerUe7"
#define POSITION(Ze, Sp) printf("\033[%d;%dH", Ze, Sp)
#define CLEAR printf_s("\033[2J")
#define HOME printf_s("\033[H")
#define CLEAR_LINE printf("\033[K")

int main()
{
	int again = 0;
	do {
		CLEAR;
		HOME;

		kasten(3, 15, "", "Zeichenzaehler", "", "", "", "", "", "", "");
		printf_s("\n\n");

		int elemente = 100;
		int zeichenLaenge;
		unsigned char eingabe[elemente];
		int counterZE = 0;
		int counterSP = 0;
		int zeileAusgabe = 1;

		zeichenLaenge = einlesen(eingabe);

		for (int i = 0; i < zeichenLaenge; i++)
		{
			printf_s("%c", eingabe[i]);
		}

		printf_s("\n\n");

		counterZE_SP(&counterZE, &counterSP, zeichenLaenge, eingabe);

		if (counterZE == 1)
		{
			counterZE *= 12;
			kasten(counterSP, counterZE + 1, "", "", "", "", "", "", "", "", "", "");
		}
		else if (counterZE == 2)
		{
			counterZE *= 13;
			counterZE += 1;
			kasten(counterSP, counterZE + 1, "", "", "", "", "", "", "", "", "", "");
		}
		else if (counterZE == 3)
		{
			counterZE *= 14;
			counterZE += 1;
			kasten(counterSP, counterZE + 1, "", "", "", "", "", "", "", "", "", "");
		}
		else
		{
			kasten(counterSP, 60, "", "", "", "", "", "", "", "", "", "");
		}

		POSITION(13, 2);

		quantityChar(&zeileAusgabe, zeichenLaenge, eingabe);

		again = repeat(zeileAusgabe);

	} 	while (again == 1);

	return 0;
}