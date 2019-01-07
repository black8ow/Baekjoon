#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, L;
	int tapes = 0;
	int leaksnum = 0;
	int k = 0;

	scanf("%d %d", &N, &L);

	int totalremains = N;

	int *leaks = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) scanf("%d", &leaks[i]);

	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			if (leaks[n] < leaks[m]) {
				int tmp = leaks[n];
				leaks[n] = leaks[m];
				leaks[m] = tmp;
			}

		}
	}

	//for (int k = 0; k < N; k++) printf("%d ", leaks[k]);

	while (k < N) {
		leaksnum = leaks[k] + L;
		tapes++;
		while (leaksnum >= leaks[k] + 0.5){
			k++;
		}
	}
	printf("%d\n", tapes);

	return 0;
}
