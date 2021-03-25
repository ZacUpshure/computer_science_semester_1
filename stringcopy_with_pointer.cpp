
#include <stdio.h>

int main()
{
	char text1[] = "This text is supposed to be coppied";
	char text2[35];
	char* tp1 = text1, * tp2 = text2;

	while (*tp1)
	{
		*tp2 = *tp1;
		tp2++;
		tp1++;
	}
	*tp2 = *tp1;
	printf("copied text: %s\n", text2);

	return 0;
}


