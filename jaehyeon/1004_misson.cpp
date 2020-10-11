#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int solve() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("\n%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
	return 0;
}

int solve() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("\n%d\n%d\n%d\n%d\n", (a + b) % c, ((a % c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) % c);
	return 0;
}

int solve3() {
	unsigned int x, y, result, result2, result3, result4;
	scanf("%d %d", &x, &y);
	result = y % 10 * x;
	result2 = (y % 100) / 10 * x;
	result3 = y / 100 * x;
	result4 = x * y;

	printf("\n%d\n%d\n%d\n%d", result, result2, result3, result4);
	return 0;
}