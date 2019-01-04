#include <stdio.h>

int main() {
	int e, s, m;
	int year = 0;

	scanf("%d %d %d", &e, &s, &m);

	int E = 0;
	int S = 0;
	int M = 0;

	while (!(E == e && S == s && M == m)) {
		E++;
		S++;
		M++;
		if (E == 16) E = 1;
		if (S == 29) S = 1;
		if (M == 20) M = 1;
		year++;
	}

	printf("%d\n", year);

	return 0;
}
