#include<stdio.h>

int main() {
	int a;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("%d�O����",a);
	else
		printf("%d�O�_��",a);
}