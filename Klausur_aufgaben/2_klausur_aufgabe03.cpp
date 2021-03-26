// klausur.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int F1(int);
int F2(char);
char F3(int, int);

int main()
{
	int a = 1, b = 2, c = 3;

	printf("Von ");
	if (a < b)
		printf("%i\n", F1(c));
	c = F2(F3(a, F1(b)));

	printf("");

	F2(F3(1, 9) + 1);
	F2('a' + 8);
	F2('s');

	printf(" ");

	if (b > c)
		printf("b = %i und c = %i\n", b, c);
	a = F2(F3(F1(c), F1(a)));

	printf("!");
}

int F1(int a)
{
	a += 10;
	return a * 5;
}
int F2(char b)
{
	printf("%c", b);
	return 5;
}
char F3(int c, int d)
{
	return (d > c) ? 'a' : 'z';
}

