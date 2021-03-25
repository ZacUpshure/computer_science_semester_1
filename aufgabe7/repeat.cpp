#include <stdio.h>
#define POSITION(Ze, Sp) printf_s("\033[%d;%dH", Ze, Sp)
#define CLEAR_LINE printf_s("\033[K")

int repeat(int zeileAusgabe)
{
	char answer;
	char dummy;
	do {
		POSITION(14 + zeileAusgabe, 1);
		scanf_s("%c", &answer);
	} 	while (answer == '\n');

	do {
		scanf_s("%c", &dummy);
	} while (dummy != '\n');

	do {
		if (answer != 'j' && answer != 'J' && answer != 'n' && answer != 'N')
		{
			POSITION(15 + zeileAusgabe, 1);
			CLEAR_LINE;
			printf_s("WARNUNG Bitte geben sie das Zeichen J oder das Zeichen N ein:\t");
			do {
				POSITION(15 + zeileAusgabe, 63);
				scanf_s("%c", &answer);
			}
			while (answer == '\n');

			do {
				scanf_s("%c", &dummy);
			} while (dummy != '\n');
		}
		else if (answer == 'n' || answer == 'N')
		{
			printf_s("Das Programm wird beendet.\n");

			return 0;
		}
	} while (answer != 'j' && answer != 'J' && answer != 'n' && answer != 'N');

	return 1;
}