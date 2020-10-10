#define _CRT_SECURE_NO_WARNINGS
#define P 3.3058
#include <stdio.h>

int main_1() {
	char x;
	printf("문자를 입력하시오: ");
	scanf("%c", &x);
	printf("아스키코드 :%d", x);
	return 0;
}

int main_2() {
	float y;
	double z;
	printf("면적을 제곱미터 단위로 입력하시오 ");
	scanf("%f", &y);
	z = y / P;
	printf("%f제곱미터는 %lf평입니다.", x, y);
	return 0;
}