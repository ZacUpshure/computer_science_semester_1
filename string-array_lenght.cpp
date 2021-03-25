
#include <stdio.h>

int main()
{
	char text[] = "This is a string-array.";
	char* tp = text;
	int len = 0;

	while (*tp++)
	{
		len++;
		printf("textlenght : %i\n", len);
	}

	return 0;
}


