#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a[999];
	int alphabets, number, special, i;
	i = alphabets = number = special = 0;
	printf("Enter your words : ");
	scanf("%s", a);
	while (a[i] != '\0') {
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
			alphabets++;
		}
		else if (a[i] >= '1' && a[i] <= '9') {
			number++;
		}
		else {
			special++;
		}
		i++;
	}
	printf("Alphabets = %d\n", alphabets);
	printf("Number = %d\n", number);
	printf("Special characters = %d", special);
	return 0;
}