#include<stdio.h>

int main() {
	int a, b;
	printf("請輸入兩個整數(中間使用間隔區分):");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
		printf("%d是%d的倍數",a,b);
	else
		printf("%d不是%d的倍數",a,b);
}