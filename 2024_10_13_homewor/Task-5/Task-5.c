#include <stdio.h>
#include <stdlib.h>
#define MIN(a, b) (a) < (b) ? (a) : (b)
int main(void)
{
    int n;
    scanf_s("%d\n", &n);
    int ar[1000];
    int a;
    int x;
    int mn = 1001;
    int val;
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &a);
        ar[i] = a;
    }
    scanf_s("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x > 0)
            if (ar[i] >= 0)
                mn = MIN(mn, abs(x - ar[i]));
            else
                continue;
        else
            if (ar[i] < 0)
                mn = MIN(mn, abs(x - ar[i]));
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(x - ar[i]) == mn)
            val = ar[i];
    }
    printf("%d", val);
    return 0;
}