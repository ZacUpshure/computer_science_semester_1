
#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Ein Teststring mit Worten";
	char part1[255] = "";
	char part2[255] = "";
	char word1[255] = "";
	char word2[255] = "";
	char *ch = NULL;
	int x = 0, y = 0;

	printf("search:");
	//scanf_s("%s", word1);
	fgets(word1, 255, stdin);
	printf("replace:");
	//scanf_s("%s", word2);
	fgets(word2, 255, stdin);

	ch = strstr(string, word1);
	while (x < (ch - string))
	{
		part1[x] = string[x];
		x++;
	}
	while (string[x] != ' ')
	{
		x++;
	}
	while (x < strlen(string))
	{
		part2[y] = string[x];
		x++;
		y++;
	}
	strcat_s(part1, word2);
	strcat_s(part1, part2);
	printf("%s", part1);

	return 0;
}


