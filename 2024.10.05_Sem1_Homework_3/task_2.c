#include <stdio.h>

int main(void)
{
    int k;
    int n, m;

    scanf_s("%d", &k);

    for (int i = 0; i < k; i++)
    {

        scanf_s("%d %d", &n, &m);
        printf_s("%d\n", 19 * m + ((n + 239) * (n + 366)) / 2);
    }

    return 0;
}