#include <stdio.h>
#include <stdlib.h>

void checkTriple(int input, int tnList[], int cnt);


int main() {
	
	int tn = 1; 
	int cnt = 0;
	for (int i = 2; tn < 1000; i++) {
		cnt++;
		tn += i;
	}
	tn = 1;
	int* tnList = (int*)malloc(sizeof(int)*cnt);
	for (int k = 2; tn < 1000; k++) {
		tnList[k - 2] = tn;
		tn += k;
	}

	int testcase;
	scanf("%d", &testcase);

	for (int j = 0; j < testcase; j++) {
		int input;
		scanf("%d", &input);
		checkTriple(input, tnList, cnt);
	}

	return 0;
}

void checkTriple(int input, int List[], int cnt) {

	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			for (int k = 0; k < cnt; k++) {

				if ((List[i] + List[j] + List[k]) == input) {
					printf("%d\n", 1);
					return;
				}
			}
		}
	}
	printf("%d\n", 0);
}
