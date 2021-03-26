// klausur.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int Quadrat(int);
int Addiere(int, int);
int Multipliziere(int, int);


int main()
{
    char Text[] = "Dies ist ein Text!";
    char* TextZeiger = Text;
    int i = 1;

    while (*TextZeiger)
    {
        if (*TextZeiger != ' ')
            printf("%c", Addiere(*TextZeiger, Multipliziere(Quadrat(2), 2) - 8));
        else
            printf("");
        TextZeiger++;
    }
    printf("\n");

    for (; i <= 5; i++)
    {
        printf("%i: %i\n", i, Multipliziere(i, Addiere(i, Quadrat(i))));
        i++;
    }
}

int Quadrat(int Zahl)
{
    return Zahl * Zahl;
}

int Addiere(int Zahl1, int Zahl2)
{
    return Zahl1 + Zahl2;
}

int Multipliziere(int Zahl1, int Zahl2)
{
    return Zahl1 * Zahl2;
}

