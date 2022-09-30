#include <stdio.h>

void Temperatures(double n);

int main(void)
{
	double F;
	printf("请输入华氏温度:");
	while (scanf_s("%lf", &F) == 1)
	{
		Temperatures(F);
		printf("\n请输入华氏温度(输入q或其他非数字退出):");
	}
	return 0;
}

void Temperatures(double n)
{
	const float T = 273.16;
	double C, K;
	C = 5.0 / 9.0 * (n - 32.0);
	K = C + T;
	printf("华氏温度为%.2fF,摄氏温度为%.2fC,开氏温度为%.2fK。", n, C, K);
	return;
}