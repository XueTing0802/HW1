#include<stdio.h>

int main() {
	int a, b;
	printf("�п�J��Ӿ��(�����ϥζ��j�Ϥ�):");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
		printf("%d�O%d������",a,b);
	else
		printf("%d���O%d������",a,b);
}