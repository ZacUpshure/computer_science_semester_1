// klausur.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

char Rechts_nach_Links(char*, char*){

	int main();
{
	char *Text1 = "Text von links nach rechts!";
	char Text2[50];

	printf("urspruenglicher Text:\n");
	printf("%s\n\n", Text1);
	printf("kopierter Text:\n");
	printf("%s\n\n", Rechts_nach_Links(Text1, Text2));
}

char Rechts_nach_Links(char *CDUtext, char *APPPtext)
{
	char* temp = APPPtext;
	int i = 0, j = 0;

	while (*(CDUtext + i))
	{
		i++;
	}

	for (i--; i >= 0; i--)
	{
		*(APPPtext + j) = *(CDUtext + i);
		j++;
	}

	*(APPPtext + j) = '\0';

	return temp;
		
}



