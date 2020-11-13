#include <stdio.h>
#include <stdlib.h>

int solve_1() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;

	for (int i = 1; i < 5; i++) {
		printf("%d", *p + 2);
		p++;
	}
	return 0;
}

int solve_2() {
	int n, sum = 0;

	scanf("%d", &n);

	int* ptr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", ptr + i);

		sum += *(ptr + i);
	}
	printf("%d", sum);

	free(ptr);

	return 0;
}

int solve_3() {
	int i, tmp;

	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = arr;

	for (i = 4; i >= 2; i--) {
		tmp = *(ptr + i);

		*(ptr + i) = *(ptr + 4 - i);

		*(ptr + 4 - i) = tmp;
	}
	for (i = 0; i < 5; i++)

		printf("%d ", *(ptr + i));

	return 0;
}