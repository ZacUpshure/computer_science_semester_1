#include <stdio.h>

int main()
{
	char str1[25];
	char* sp = str1;
	int len = 0;

	printf("please enter a string!\n");
	fgets(str1, 25, stdin);

	while (*sp++)
	{
		len++;
		printf("textlenght : %i\n", len);
	}

	return 0;
}