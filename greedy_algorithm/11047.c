#include <stdio.h>
#include <stdlib.h>

int main() {

	int N, K;
	scanf("%d %d", &N, &K);
	int* coinvals = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++) scanf("%d", &coinvals[i]);

	int totalcoins = 0;

	while (K != 0) {
		totalcoins += (K / coinvals[N - 1]);
		K %= coinvals[N - 1];
		N--;
	}

	printf("%d\n", totalcoins);
	return 0;
}
