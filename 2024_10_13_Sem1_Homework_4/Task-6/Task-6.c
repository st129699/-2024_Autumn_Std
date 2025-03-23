#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)
int main(void)
{
    int n;
    scanf_s("%d", &n);
    int ar_val[101];
    int ar_perc[101];
    double mx_inc = -1;
    double mx_inc1;
    int indx;

    for (int i = 0; i < n; i++)
        scanf_s("%d", &ar_val[i]);
    for (int j = 0; j < n; j++)
        scanf_s("%d", &ar_perc[j]);
    for (int k = 0; k < n; k++)
    {
        mx_inc1 = mx_inc;
        mx_inc = MAX(mx_inc, ar_val[k] * ((double)ar_perc[k] / 100.0));
        if (mx_inc1 != mx_inc)
            indx = k + 1;
    }
    printf("%d", indx);
    return 0;
}