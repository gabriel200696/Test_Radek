#include <stdio.h>
#include <string.h>
#include "ConcatRem.h"
#pragma warning(disable : 4996)

char* getString() {

	char output[100];
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
	} while (c != 13 && i < 99);

	output[i] = '\0';
	printf("\n");

	return output;

}

int getNumber() {
	char output[100];
	char c;
	int i = 0;
	int number = 0;

	do
	{
		c = getch();
		if (isdigit(c) != 0)
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
	} while (c != 13 || i == 0);

	output[i] = '\0';
	number = atoi(output);
	printf("\n");
	return number;
}

int main() {
	char s[100];
	char t[100];
	int k;


	printf("Enter the starting string: ");
	strcpy(s, getString());
	printf("Enter the desired string: ");
	strcpy(t, getString());

	do {
		printf("Enter the number of operations (1 <= k <= 100): ");
		k = getNumber();
	} while (k == 0 || k > 100);


	char* res = ConcatRemove(s, t, k);

	printf("%s", res);

	return 0;
}