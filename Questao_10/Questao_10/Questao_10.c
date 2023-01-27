#include <stdio.h>
#pragma warning(disable : 4996).

char* getString() {

	char output[300];
	char c;
	int i = 0;

	do
	{
		c = getch();
		if (isalpha(c) != 0 || c == 32)
		{
			output[i] = c;
			i++;
			printf("%c", c);
		}
		else if (c == 8 && i)
		{
			output[i] = '\0';
			i--;
			printf("\b \b");
		}
	} while (c != 13);

	output[i] = '\0';
	printf("\n");

	return output;

}

int CalcLen(char s[]) {

	int cont = 0;
	while (s[cont] != '\0' ) {
		cont++;
	};
	return cont;
 }

int main() {
	char resp[300];
	
	printf("Enter a string of characters: ");
	strcpy(resp, getString());


	printf("The length of a string informed by the user is:  %i \n", CalcLen(resp));

	return 0;
}
