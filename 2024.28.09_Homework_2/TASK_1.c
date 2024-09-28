#include <stdio.h>

#include <stdlib.h>
int main(void) {
    int x_1, y_1, x_2, y_2;

    scanf_s("%d %d", &x_1, &y_1);
    scanf_s("%d %d", &x_2, &y_2);

    if ((x_1 == x_2 && y_1 != y_2) || (x_1 != x_2 && y_1 == y_2)) {
        printf("YES\n");
    }
    else if ((x_2 % x_1) == (y_2 % y_1)) {
        printf("YES\n");
    }
    else if ((abs(y_2 - y_1) + x_2 == x_1) || (abs(x_2 - x_1) + y_2 == y_1)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
    
}