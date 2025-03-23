#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf_s("%d", &n);
    int ar[1000];
    int x;
    int a;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &a);
        ar[i] = a;
    }
    printf("\n");
    scanf_s("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;