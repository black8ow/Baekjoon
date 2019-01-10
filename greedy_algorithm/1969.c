#include <stdio.h>
#include <stdlib.h>

int main() {

	int dnaNums, strlength;
	scanf("%d %d", &dnaNums, &strlength);

	char** strList = (char**)malloc(sizeof(char*)*dnaNums);
	for (int i = 0; i < dnaNums; i++) {
		strList[i] = (char*)malloc(sizeof(char)*strlength);
		scanf("%s", &strList[i]);
	}

	printf("%s\n", strList[0]);

	char* Hdna = (char*)malloc(sizeof(char)*strlength);
	int hammingdis = 0;
	printf("1 okay\n");
	printf("%c\n", strList[0][0]);

	for (int j = 0; j < strlength; j++) {
		int a, c, g, t;
		a = 0;
		c = 0;
		g = 0;
		t = 0;
		char maxchar = ' ';

		for (int k = 0; k < dnaNums; k++) {
			if (strList[k][j] == 'A') a++;
			if (strList[k][j] == 'C') c++;
			if (strList[k][j] == 'G') g++;
			if (strList[k][j] == 'T') t++;
		}

		printf("2 okay\n");

		if (a >= c && a >= g && a >= t) {
			Hdna[j] = 'A';
			hammingdis = hammingdis + c + g + t;
		}
		else if (c >= a && c >= g && c >= t) {
			Hdna[j] = 'C';
			hammingdis = hammingdis + a + g + t;
		}
		else if (g >= a && g >= c && g >= t) {
			Hdna[j] = 'G';
			hammingdis = hammingdis + c + a + t;
		}
		else {
			Hdna[j] = 'T';
			hammingdis = hammingdis + c + g + a;
		}
		printf("3 okay\n");
	}
	printf("4 okay\n");

	printf("%s\n%d", Hdna, hammingdis);

	return 0;

}