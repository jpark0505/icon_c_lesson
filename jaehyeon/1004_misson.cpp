#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int solve() {
	int A, B;

	scanf("%d\n%d", &A, &B);

	printf("\n%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
	return 0;
}

int solve() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("\n%d\n%d\n%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C, (A * B) % C, ((A % C) * (B % C)) % C);
	return 0;
}

int solve3() {
	unsigned int x, y, result, result2, result3, result4;
	scanf("%d\n%d", &x, &y);
	result = y % 10 * x;
	result2 = (y % 100) / 10 * x;
	result3 = b / 100 * a;
	result4 = a * b;

	printf("\n%d\n%d\n%d\n%d", result, result2, result3, result4);
	return 0;
}