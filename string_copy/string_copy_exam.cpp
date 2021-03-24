
#include <stdio.h>
#include <string.h>

int main()
{
	char text1[30];
	char text2[30];

	printf("please enter a string:\t");
	fgets(text1, 30, stdin);

	printf("your string is : %s", text1);
	printf("\nplease enter an replacement string:\t");
	fgets(text2, 30, stdin);

	//strcpy_s(text1, text2);

	//printf("%s", text1);



	int i = 0;

	while (text2[i] != '\0')				//------------------------------
			text1[i] = text2[i++];			//copies one string into another
		text1[i] = '\0';					//and replaces it's content.
		printf("copies text: %s\n", text2);	//------------------------------

		// is equal to strcpy(str1, str2);
		//			   printf("%s", str2);

	return 0;
}


