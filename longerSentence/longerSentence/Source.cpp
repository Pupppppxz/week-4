#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a[99], b[99];
	int countA, countB, i, j;
	i = countA = countB = j = 0;
	printf("Complete sentence 1 : ");
	scanf("%s", a);
	while (a[i] != '\0') {
		if (a[i] >= 1 || a[i] >= 'a' || a[i] >= 'A') {
			countA++;
		}
		else {
			break;
		}
		i++;
	}
	printf("Complete sentence 2 : ");
	scanf("%s", b);
	while (b[j] != '\0') {
		if (b[j] >= 1 || b[j] >= 'a' || b[j] >= 'A') {
			countB++;
		}
		else {
			break;
		}
		j++;
	}
	if (countA == countB) {
		printf("Same");
	}
	else if (countA > countB) {
		printf("Number of characters in sentence 1 > Number of characters in sentence 2");
	}
	else {
		printf("Number of characters in sentence 2 > Number of characters in sentence 1");
	}
	return 0;
}