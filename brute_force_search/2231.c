#include <stdio.h>

int main() {
	int inputNum;
	scanf("%d", &inputNum);
	int splitSum = 0;
	int i;

	for (i = 1; i <= 1000000; i++) {
		int placeNum = i;
		splitSum += i;
		while (placeNum != 0) {
			splitSum += (placeNum % 10);
			placeNum /= 10;
		}
		if (splitSum == inputNum) break;
		else splitSum = 0;
	}
	if (i == 1000001) i = 0;
	printf("%d\n", i);

	return 0;
}
