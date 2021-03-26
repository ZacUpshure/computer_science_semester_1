#include <stdio.h>

char KopiereBuchstaben(*char, *char);

int main()
{
    char Text1[] = "Text mit Zahlen 11, 17.5 usw.!";
    char Text2[50];

    printf("urspruenglicher Text:\n");
    printf("%s\n\n", Text1);
    printf("kopiere Tect:\n");
    printf("%s\n\n", KopiereBuchstaben(Text1, Text2));
}

char KopiereBuchstaben(*char Text1[], *char Text2[50]);
{
    int i, j = 0;

    for(i = 0; Text1[i] != '\0'; i++)
    {
        if(*Text1[i] >= 'a' && *Text1[i] <= 'z')
        {
            Text2[j] = Text1[i]; 
            j++
        }
        Text2[j] = '\0';
        return Text2;
    }
}