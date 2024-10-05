#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)

int main(void)
{
	int n;
	int s;
	int v;
	int max_v1 = 0;
	int max_v2 = 0;
	int cnt = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &v, &s);
		if (s == 0)
			continue;
		else
		{
			max_v1 = max_v2;
			max_v2 = MAX(max_v2, v);
			if (max_v2 != max_v1)
				cnt = i + 1;
		}
	}
	if (max_v2 == 0)
		printf("-1");
	else
		printf("%d", cnt);
	
	return 0;
}