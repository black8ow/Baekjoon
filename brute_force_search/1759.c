#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *c1, const void *c2);
void pwMaker(char* passwd, char* pwmake, int base, int left);
bool isCond(char* str, int size);
int pwlength, pwalp_nums;

int main() {

	scanf("%d %d", &pwlength, &pwalp_nums);
	char* passwd = (char*)malloc(sizeof(char)*pwlength);
	char* pwalps = (char*)malloc(sizeof(char)*pwalp_nums);

	for (int i = 0; i < pwalp_nums; i++) {
		scanf(" %c", &pwalps[i]);
	}

	qsort(pwalps, pwalp_nums, sizeof(pwalps[0]), comp);
	pwMaker(passwd, pwalps, 0, pwlength);

	return 0;
}

int comp(const void *c1, const void *c2) {
	return strcmp((char*)c1, (char*)c2);
}

bool isCond(char* str, int size) {
	int vowel = 0;
	int consonant = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
			vowel++;
		else 
			consonant++;
	}
	if (vowel >= 1 && consonant >= 2) return true;
	else return false;

}

void pwMaker(char* passwd, char* pwalps, int base, int left) {
	if (left == 0) {
		if (isCond(passwd, pwlength)) {
			for (int n = 0; n < pwlength; n++) printf("%c", passwd[n]);
			printf("\n");
			//printf("%s\n", passwd);		//문자열 오류?
		}
		return;
	}
	for (int m = base; m <= pwalp_nums - left; m++) {
		passwd[pwlength - left] = pwalps[m];
		pwMaker(passwd, pwalps, m + 1, left - 1);
	}
	
	/*for (int m = base; m <= pwalp_nums - left; m++) {
		passwd[base] = pwalps[m];
		base++;
		left--;
		pwMaker(passwd, pwalps);
	}
	*/
	// 전역변수 base와 left를 이용하여 구성하려고 했으나
	// left 값이 0에 도달했을 경우의 문제가 생김

}