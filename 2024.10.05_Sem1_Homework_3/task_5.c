#include <stdio.h>
int main(void)
{
	int n;
	int num;
	int cnt = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++, printf("\n"))
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d ", &num);
			if (num == 1)
				cnt += 1;
		}

	printf("%d", cnt / 2);
	return 0;
}