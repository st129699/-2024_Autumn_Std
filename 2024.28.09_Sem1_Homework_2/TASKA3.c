

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x_1, y_1, r_1;
    int x_2, y_2, r_2;
    int dx;
    int dy;
    int dist;

    scanf("%d %d %d", &x_1, &y_1, &r_1);
    scanf("%d %d %d", &x_2, &y_2, &r_2);

    dx = x_2 - x_1;
    dy = y_2 - y_1;
    dist = dx * dx + dy * dy;

    if (dist <= (r_1 + r_2) * (r_1 + r_2) && dist >= abs(r_1 - r_2) * abs(r_1 - r_2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}