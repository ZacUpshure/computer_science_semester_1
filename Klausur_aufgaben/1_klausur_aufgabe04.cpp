// klausur.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <math.h>

double Vektorbetrag(double *Vektor, int Size);

int main()
{
	int const Size = 4;
	double Vektor[] = { 1.2, 3.4, 5.6, 7.8 };
	int i;

	printf("Der Betrag des Vektors\n");
	for (i = 0; i < Size; i++)
		printf("(%10.4f)\n", *(Vektor + i));
	printf("ist gleich %f. \n", Vektorbetrag(Vektor, Size));

	return 0;
}

double Vektorbetrag(double* Vektor, int Size)
{
	int i;
	double sqsum = 0;

	for (i = 0; i < Size; i++)
	{
		sqsum += *(Vektor + i) * *(Vektor + i);
	}

	return sqrt(sqsum);
}

