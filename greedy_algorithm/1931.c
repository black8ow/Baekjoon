#include <stdio.h>
#include <stdlib.h>

int main() {

	int N;
	long int maxmeeting = 0;

	scanf("%d", &N);
	long int* starttime = (long int*)malloc(sizeof(long int)*N);
	long int* finishtime = (long int*)malloc(sizeof(long int)*N);

	for (int i = 0; i < N; i++) {
		scanf("%ld %ld", &starttime[i], &finishtime[i]);
	}
	/*
	for (int i = 0; i < N; i++) {
		printf("%ld ", starttime[i]);
	}
	printf("\n");

	for (int i = 0; i < N; i++) {
		printf("%ld ", finishtime[i]);
	}
	printf("\n");
	*/
	

	long int biggeststarts = 0;

	for (int k = 0; k < N; k++) {
		if (biggeststarts < starttime[k]) biggeststarts = starttime[k];
	}

	long int current_time = 0;
	int selectedm;
	while (1) {

		if (current_time > biggeststarts) break;
		long int minfinish = 2147483647;
		selectedm = 100001;

		for (int j = 0; j < N; j++) {
			if (current_time <= starttime[j]) {
				if (minfinish > finishtime[j]) {
					minfinish = finishtime[j];
					selectedm = j;
				}
			}
		}
		current_time = finishtime[selectedm];
		maxmeeting++;
	}



	printf("%ld\n", maxmeeting);

}
