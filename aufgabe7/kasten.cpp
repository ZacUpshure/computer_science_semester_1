#include <stdio.h> 
void kasten(int laenge, int breite, char* zeile01, char* zeile02, char* zeile03, char* zeile04, char* zeile05, char* zeile06, char* zeile07, char* zeile08, char* zeile09, char* zeile10)
{
	int laengeKiste = laenge;
	int BreiteKiste = breite;
	char zeichen = '|';
	char* TextZeile01 = zeile01;
	char* TextZeile02 = zeile02;
	char* TextZeile03 = zeile03;
	char* TextZeile04 = zeile04;
	char* TextZeile05 = zeile05;
	char* TextZeile06 = zeile06;
	char* TextZeile07 = zeile07;
	char* TextZeile08 = zeile08;
	char* TextZeile09 = zeile09;
	char* TextZeile10 = zeile10;

	for (int i = 0; i <= BreiteKiste; i++)
	{
		printf_s("-");
	}

	printf_s("\n");

	for (int i = 0; i < laengeKiste; i++)
	{
		if (i == 0)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile01, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile01, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 1)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile02, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile02, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 2)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile03, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile03, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 3)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile04, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile04, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 4)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile05, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile05, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 5)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile06, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile06, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 6)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile07, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile07, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 7)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile08, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile08, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 8)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile09, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile09, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else if (i == 9)
		{
			char buffer[500];
			int i = sprintf_s(buffer, "%c%*c\n", zeichen, BreiteKiste, zeichen);
			int LaengePlus = sprintf_s(buffer, "%c%s%*c\n", zeichen, TextZeile10, BreiteKiste, zeichen);
			int ZeichenLaenge = LaengePlus - i;
			printf_s("%c%s%*c\n", zeichen, TextZeile10, BreiteKiste - ZeichenLaenge, zeichen);
		}
		else
		{
			printf_s("%c%*c\n", zeichen, BreiteKiste, zeichen);
		}
	}

	for (int i = 0; i <= BreiteKiste; i++)
	{
		printf_s("-");
	}
}