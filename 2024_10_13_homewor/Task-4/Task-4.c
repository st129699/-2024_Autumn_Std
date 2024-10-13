#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main(void)
{
    int n;
    int ar[1000];
    int a;
    int mx_c = 0;
    scanf_s("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &a);
        ar[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mx_c = MAX(mx_c, ar[n - 1] + ar[i] + ar[i + 1]);
        }
        else if (i == n - 1)
        {
            mx_c = MAX(mx_c, ar[n - 2] + ar[i] + ar[0]);
        }
        else
        {
            mx_c = MAX(mx_c, ar[i - 1] + ar[i] + ar[i + 1]);
        }
    }

    printf("%d", mx_c);
    return 0;
}