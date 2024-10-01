#include<stdio.h>

int main() {
	int a;
	printf("叫块俱计:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("%d琌案计",a);
	else
		printf("%d琌计",a);
}