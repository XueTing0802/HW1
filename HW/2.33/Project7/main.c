#include<stdio.h>

int main() {
	float a, b, c, d, e,sum;
	printf("�п�J�@�Ѫ��`���{��(����):");
	scanf_s("%f", &a);
	printf("\n�п�J�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &b);
	printf("\n�п�J�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &c);
	printf("\n�п�J�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("\n�п�J�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &e);
	sum = a / c * b + d + e;
	printf("�@�ѤU�Ӷ}���h�u�@����O:%f", sum);
}