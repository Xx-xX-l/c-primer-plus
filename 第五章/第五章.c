#include <stdio.h>

void Temperatures(double n);

int main(void)
{
	double F;
	printf("�����뻪���¶�:");
	while (scanf_s("%lf", &F) == 1)
	{
		Temperatures(F);
		printf("\n�����뻪���¶�(����q�������������˳�):");
	}
	return 0;
}

void Temperatures(double n)
{
	const float T = 273.16;
	double C, K;
	C = 5.0 / 9.0 * (n - 32.0);
	K = C + T;
	printf("�����¶�Ϊ%.2fF,�����¶�Ϊ%.2fC,�����¶�Ϊ%.2fK��", n, C, K);
	return;
}