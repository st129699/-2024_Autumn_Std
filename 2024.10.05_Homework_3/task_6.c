#include <stdio.h>

int main(void)
{
	int a, b;
	int a2, b2;
	int lcm;


	scanf_s("%d %d", &a, &b);
	a2 = a;
	b2 = b;

	while (b2 != 0) {
		int temp = b2;
		b2 = a2 % b2;
		a2 = temp;
	}
	lcm = a * b / a2;

	printf("%d", lcm);

	return 0;
}