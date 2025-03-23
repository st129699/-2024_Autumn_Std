#include <stdio.h>
int main(void)
{
    int n;
    int a;
    scanf_s("%d\n", &n);
    int ar[1000];
    int mx_ar;
    int mn_ar;
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &a);
        ar[i] = a;
    }
    mx_ar = ar[0];
    mn_ar = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > mx_ar)
        {
            mx_ar = ar[i];
            continue;
        }
        if (ar[i] < mn_ar)
        {
            mn_ar = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == mx_ar)
        {
            ar[i] = mn_ar;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);

    return 0;
}