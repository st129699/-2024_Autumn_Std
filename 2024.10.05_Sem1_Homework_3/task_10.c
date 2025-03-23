#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int n;
    int max_cnt = 0;
    int num;
    int cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num > 0)
            cnt += 1;
        else
        {
            max_cnt = MAX(max_cnt, cnt);
            cnt = 0;
        }
    }
    max_cnt = MAX(max_cnt, cnt);

    printf("%d", max_cnt);

    return 0;
}