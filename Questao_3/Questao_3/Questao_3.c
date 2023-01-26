#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		(i % 3 == 0 && i % 5 == 0)
			? printf("FooBaa \n") : (i % 3 == 0)
			? printf("Foo \n") : (i % 5 == 0)
			? printf("Baa \n") : printf("%d \n", i);
	}
	return 0;
}