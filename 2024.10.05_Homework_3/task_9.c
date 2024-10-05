#include <stdio.h>
int main(void)
{
	int a, b, c, d;
	int x = -100;

	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	for (; x <= 100; x++)
	{
		if (((x * x * x) * a) + ((x * x) * b) + (x * c) + d == 0)
		{
			printf("%d ", x);
		}
	}
	return 0;

}