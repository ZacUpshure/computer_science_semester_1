#include <stdio.h>

int doubleChar(char, char);

int main()
{
    char Quelle[100] = "Dies ist ein einfacher Text";
    char Ziel[100];
    int AnzVerdoppelteZeichen;

    AnzVerdoppelteZeichen = doubleChar(Quelle, Ziel);
    printf("Urspruenglicher Text:\n %s\n", Quelle);
    printf("Text mit doppelten Zeichen:\n %s\n", Ziel);
    printf("Anzahl verdoppelte Zeichen: %i\n", AnzVerdoppelteZeichen);

    return 0;
}

int doubleChar(char *Quelle, char *Ziel)
{
    Quelle;
    Ziel;
    int i = 0;
    while (i < Quelle.length())
    {
        char c = Quelle.charAt(i);
        Ziel = Ziel + c + c;
        i++;
    }

    return Ziel;
}