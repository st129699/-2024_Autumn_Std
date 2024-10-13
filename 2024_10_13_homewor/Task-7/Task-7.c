#include <stdio.h>
int main(void)
{
    int n;
    int ar[1000];
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
        scanf_s("%d", &ar[i]);
    for (int j = n - 1; j >= 0; j--)
        printf("%d ", ar[j]);
    return 0;
}