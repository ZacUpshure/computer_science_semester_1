#include <stdio.h>

int main()
{
	int intiger;
	char repeat;
	char dummy;
	char newline;		//decleration

	do
	{
		printf("\nPlease enter an intiger: \t");
		
		if(scanf("%d%c", &intiger, &newline) !=2 )	//asks for number
		{
			printf("wrong input.\n");
			do					//--------------------
			{
				scanf("%c", &dummy);		//clear keyboard buffer
			}
			while(dummy != '\n');			//--------------------
		}
		else
		{
			printf("your input: %d\n", intiger);	//prints the number
			if (newline != '\n')
			{
				do				//--------------------
				{
					scanf("%c", &dummy);	//clear keyboard buffer
				}
				while(dummy != '\n');		//--------------------
			}
		}

		printf("\nrepeat ?\t");				//asking for repetition
		scanf("%c", &dummy);
		do						//--------------------
		{
			scanf("%c", &dummy);			//clear keyboard buffer
		}
		while(dummy != '\n');				//--------------------

		if(repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n') //asks again if the user makes an invalid input
		{
			printf("\ntype (y/n) :\t");		//asking for input
			scanf("%c", &repeat);
			do					//--------------------
			{
				scanf("%c", &dummy);		//clear keyboard buffer
			}
			while(dummy != '\n');			//--------------------
		}
		else if(repeat == 'n' || repeat == 'N')		//shuts down program
		{
			printf("programm shut down.");
			return 0;
		}
	}	
	while(repeat == 'y' || repeat == 'Y');			//repeats the program

	return 0;
}
