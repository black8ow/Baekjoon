#include <stdio.h>

int main() {
	int heightList[9];
	int n, m;
	int maxheight = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &heightList[i]);
		maxheight += heightList[i];
	}

	int result = 0;

	for (n = 0; n < 9; n++) {
		for (m = 0; m < 9; m++) {
			if (n != m) {
				result = maxheight - heightList[n] - heightList[m];
				if (result == 100) break;
				else result = 0;
			}
		}
		if (result == 100) break;
	}
	int anslist[7];
	int num = 0;
	int tmp;
	for (int k = 0; k < 9; k++) {
		if (k != n && k != m) anslist[num++] = heightList[k];
	}
	for (int a1 = 0; a1 < 7; a1++) {
		for (int a2 = 0; a2 < 7; a2++) {
			if (anslist[a2] > anslist[a1]) {
				tmp = anslist[a1];
				anslist[a1] = anslist[a2];
				anslist[a2] = tmp;
			}
		}
	}

	for (int k = 0; k < 7; k++) printf("%d\n", anslist[k]);

	return 0;
}
