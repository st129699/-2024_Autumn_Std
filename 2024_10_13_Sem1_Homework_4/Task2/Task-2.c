#include <stdio.h>
#define MAX(a , b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) > (b) ? (b) : (a)
int main(void)
{
    int n = 0;
    scanf_s("%d", &n);
    int ar[1000];
    int a;
    int l;
    int r;
    int mx_n = -1001;
    int indx;
    int mx_n1;


    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &a);
        ar[i] = a;
    }
    scanf_s("%d %d", &l, &r);
    for (int i = l; i < r; i++)
    {
        mx_n1 = mx_n;
        mx_n = MAX(mx_n, ar[i]);
        if (mx_n != mx_n1)
        {
            indx = i;
        }
        else
            continue;
    }
    printf("%d %d", mx_n, indx + 1);

    return 0;
}