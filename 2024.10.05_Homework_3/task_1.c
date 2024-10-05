# include <stdio.h>

#define MIN(a ,b) (a) < (b) ? (a) : (b)
int main(void)
{
	int a;
	int total;
	int cnt_0 = 0;
	int cnt_1 = 0;
	scanf_s("%d\n", &total);

	for (int i = 0; i < total; i++)
	{
		scanf_s("%d", &a);
		if (a == 0)
		{
			cnt_0 += 1;
		}
		else
		{
			cnt_1 += 1;
		}
	}
	printf("%d", MIN(cnt_1, cnt_0));

	return 0;
}
