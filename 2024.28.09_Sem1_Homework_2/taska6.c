#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("-1\n");
            }
            else {
                printf("0\n"); 
            }
        }
        else {
            double x = -(double)c / b;
            printf("1\n");
            printf("%.10f\n", x);
        }
    }
    else {
        double d = (double)b * b - 4 * a * c;

        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            printf("2\n");
            if (x1 < x2) {
                printf("%.10f\n", x1);
                printf("%.10f\n", x2);
            }
            else {
                printf("%.10f\n", x2);
                printf("%.10f\n", x1);
            }
        }
        else if (d == 0) {
            double x = -(double)b / (2 * a);
            printf("1\n");
            printf("%.10f\n", x);
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}
