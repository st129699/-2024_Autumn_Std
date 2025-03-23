#include <stdio.h>

int main(void) {
    int n;
    int m;
    int ar[1000];
    int l, r;

    scanf_s("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &ar[i]);
    }

    scanf_s("%d\n", &m);
    for (int j = 0; j < m; j++) {
        scanf_s("%d %d", &l, &r);
        for (int k = l; k <= r; k++) {
            printf("%d ", ar[k]);
        }
    }

    return 0;
}