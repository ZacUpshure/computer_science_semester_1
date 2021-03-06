#include <stdio.h>
#include <math.h>

int main()
{
	double R1, R2, R3;
	
	printf("Geben sie ihre drei Widerstände ein\n");

	printf("Widerstand 1 Eingeben");
	fflush(stdout);
	scanf("%lf", &R1);

	printf("Widerstand 2 Eingeben");
	fflush(stdout);
	scanf("%lf", &R2);

	printf("Widerstand 3 Eingeben");
	fflush(stdout);
	scanf("%lf", &R3);

	printf("\nIher Widerstaende :\n R1: %lf\n R2: %lf\n R3: %lf\n");

	printf("Gesamtwiderstand 'Reihenschaltung' :");
	double Rges1 = R1 + R2 + R3;
	printf("%lf\n", Rges1);

	printf("Gesamtwiderstand 'Parallelschaltung' :");
	double Rges2 = 1.0/R1 + 1.0/R2 + 1.0/R3;
	printf("%lf\n", Rges2);

	printf("Wheatstonesche Messbrücke : ");
	double RU = R3 * R1 / R2;
	printf("%lf Ohm\n", RU);

	return 0;
		
}
