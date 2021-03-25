
#include <stdio.h>
#include <string.h>

int main()
{
	int array[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int i;
	int* ap = array;

	for (i = 0; i < 10; i++)
	{
		printf("array %i: %i\n", i + 1, *(ap + i));
	}

	return 0;
}


