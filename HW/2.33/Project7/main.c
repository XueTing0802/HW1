#include<stdio.h>

int main() {
	float a, b, c, d, e,sum;
	printf("請輸入一天的總里程數(公里):");
	scanf_s("%f", &a);
	printf("\n請輸入汽油一公升多少錢:");
	scanf_s("%f", &b);
	printf("\n請輸入平均一公升能行駛多少公里:");
	scanf_s("%f", &c);
	printf("\n請輸入一天的停車費:");
	scanf_s("%f", &d);
	printf("\n請輸入一天的通行費(過路費):");
	scanf_s("%f", &e);
	sum = a / c * b + d + e;
	printf("一天下來開車去工作的花費:%f", sum);
}