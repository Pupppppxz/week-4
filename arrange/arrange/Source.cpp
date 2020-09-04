#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int tmp, a[10], num = 10;
	for (int i = 0; i < num; i++) {
		printf("Enter number %d : ", i + 1);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (a[j] > a[j+1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	printf("Number after sort : ");
	for (int j = 1; j <= num; j++) {
		printf("%10d\t", a[j]);
	}
	return 0;
}