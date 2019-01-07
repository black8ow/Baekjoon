#include <stdio.h>

int main() {
	int L, P, V;
	int casecnt = 0;
	while (1) {
		scanf("%d %d %d", &L, &P, &V);
		
		if (L == 0 && P == 0 && V == 0) break;

		casecnt++;
		int resultval = 0;
		while (1) {
			if (V - P < 0) {
				if (V >= L) resultval += L;
				else resultval += V;
				break;
			}
			else {
				resultval += L;
				V -= P;
			}
		}

		printf("Case %d: %d\n", casecnt, resultval);

	}
	return 0;
}
