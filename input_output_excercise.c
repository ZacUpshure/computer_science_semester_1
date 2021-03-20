#include <stdio.h>

int main()
{
	int intiger;
	char repeat;
	char dummy;
	char newline;

	do
	{
		printf("\nPlease enter an intiger: \t");
		
		if(scanf("%d%c", &intiger, &newline) !=2 )
		{
			printf("wrong input.\n");
			do
			{
				scanf("%c", &dummy);
			}
			while(dummy != '\n');
		}
		else
		{
			printf("your input: %d\n", intiger);
			if (newline != '\n')
			{
				do
				{
					scanf("%c", &dummy);
				}
				while(dummy != '\n');
			}
		}

		printf("\nrepeat ?\t");
		scanf("%c", &dummy);
		do
		{
			scanf("%c", &dummy);
		}
		while(dummy != '\n');

		if(repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n')
		{
			printf("\ntype (y/n) :\t");
			scanf("%c", &repeat);
			do
			{
				scanf("%c", &dummy);
			}
			while(dummy != '\n');
		}
		else if(repeat == 'n' || repeat == 'N')
		{
			printf("programm shut down.");
			return 0;
		}
	}
	while(repeat == 'y' || repeat == 'Y');

	return 0;
}
