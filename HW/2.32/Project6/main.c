#include<stdio.h>

int main() {
	float h, w, bmi;
	printf("請輸入體重(單位:公斤):");
	scanf_s("%f", &w);
	printf("請輸入身高(單位:公分):");
	scanf_s("%f", &h);
	h = h / 100;
	bmi = w / (h * h);
	printf("BMI : %f\n", bmi);
	if (bmi < 18.5)
		printf("體重不足(bmi < 18.5)");
	else if (bmi >= 18.5 && bmi < 25)
		printf("體重正常(18.5=<bmi<25)");
	else if (bmi >= 25 && bmi < 30)
		printf("體重過重(25=<bmi<30)");
	else if (bmi >= 30)
		printf("肥胖(bmi>=30)");
}