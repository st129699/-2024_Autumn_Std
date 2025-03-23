#include <stdio.h>

int main(void)
{
	int x;
	int y;

	scanf_s("%d %d", &x, &y);

	if (x == 1 && y == 1)
	{
		printf("0");
	}
	else if (x == y)
	{
		printf("2");
	}
	else
	{
		printf("1");
	}

	return 0;

}