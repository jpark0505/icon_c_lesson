#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int solve1() {
	int A, B;

	while (A != 0 || B != 0) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

int solve2() {
	int N;
	scanf("%d", &N);
	for (int a = 1; a < 10; a++) {
		printf("%d * %d = %d\n", N, a, N * a);
	}
	return 0;
}

int solve3() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else 
		printf("4");
	return 0;
}

int solve4() {
	int N, Line = 1;
	scanf("%d", &N);
	while (N != 0) {
		for (int Empty = N - 1; Empty > 0; Empty--)
			printf(" ");
		for (int Exist = 1; Exist <= Line; Exist++)
			printf("*");
		printf("\n");
		N--;
		Line++;
	}
	return 0;
}

int solve() {
	int H, M;
	scanf("%d %d", &H, &M);
	if (M >= 45) {
		printf("%d %d", H, M - 45);
	}
	else if (H == 0) {
		printf("%d %d", H + 23, M + 15);
	}
	else
		printf("%d %d", H - 1, M + 15);
	return 0;
}