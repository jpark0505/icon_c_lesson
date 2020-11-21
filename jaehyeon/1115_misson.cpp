#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int solve_1() {
	char str1[100];
	char str2[100];

	scanf("%s", str1);
	scanf("%s", str2);

	strcat(str1, str2);

	printf("%s", str1);

	return 0;
}


int solve_2() {
	int i = 0;
	char s1[100];
	scanf("%[^\n]s", s1);

	char* ptr = strtok(s1, " ");

	while (ptr != NULL) {
		ptr = strtok(NULL, " ");
		i++;
	}
	printf("%d", i);
	return 0;
}

int solve_3() {
	int count = 0;
	char a[100];
	gets_s(a, sizeof(a));
	char k;
	scanf("%c", &k);

	char* ptr = strchr(a, k);

	while (ptr != NULL) {
		ptr = strchr(ptr + 1, k);
		count++;
	}
	printf("%d", count);
	return 0;
}