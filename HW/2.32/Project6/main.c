#include<stdio.h>

int main() {
	float h, w, bmi;
	printf("�п�J�魫(���:����):");
	scanf_s("%f", &w);
	printf("�п�J����(���:����):");
	scanf_s("%f", &h);
	h = h / 100;
	bmi = w / (h * h);
	printf("BMI : %f\n", bmi);
	if (bmi < 18.5)
		printf("�魫����(bmi < 18.5)");
	else if (bmi >= 18.5 && bmi < 25)
		printf("�魫���`(18.5=<bmi<25)");
	else if (bmi >= 25 && bmi < 30)
		printf("�魫�L��(25=<bmi<30)");
	else if (bmi >= 30)
		printf("�έD(bmi>=30)");
}