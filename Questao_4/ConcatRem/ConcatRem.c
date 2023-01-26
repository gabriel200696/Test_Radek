#include <stdio.h>
#include <string.h>

char* deblank(char str[]) {

	int c = 0, j = 0;
	while (str[c] != '\0') {
		if (str[c] != ' ') {
			str[j++] = str[c];
		}
		c++;
	}
	str[j] = '\0';
	return str;

}

char* ConcatRemove(char s[], char t[], int k) {

	strcpy_s(s, 100, s);
	strcpy_s(s, 100, s);

	s = deblank(s);
	t = deblank(t);
	if ((strlen(s) + strlen(t)) <= k) {
		return "yes";
	}
	else {
		int i = 0;
		do {
			i++;

		} while (s[i] == t[i]);

		int aux = k - ((strlen(s) - i) + (strlen(t) - i));

		if (aux >= 0 && aux % 2 == 0) {
			return "yes";
		}
		else {
			return "no";
		}
	}
}