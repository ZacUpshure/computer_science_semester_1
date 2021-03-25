
#include <stdio.h>
#include <string.h>

int main()
{
	char text1[] = "This is a text.";
	char text2[30];

	int i = 0;

	while (text1[i] != '\0')
			text2[i] = text1[i++];
		text2[i] = '\0';
		printf("copies text: %s\n", text2);

	return 0;
}


