#include <stdio.h>

#define SWAP(a, b) { int tmp = a; a = b; b = tmp; }

int main() {
    int l1, w1, h1, l2, w2, h2, lc, wc, hc;

    scanf("%d %d %d", &l1, &w1, &h1);
    scanf("%d %d %d", &l2, &w2, &h2);
    scanf("%d %d %d", &lc, &wc, &hc);

    if (l1 < w1) 
    {
        SWAP(l1, w1);
    }
    if (l2 < w2)
    {
        SWAP(l2, w2);
    }
    if (lc < wc)
    {
        SWAP(lc, wc);
    }

    if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
        printf("YES");
    }
    else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc) {
        if ((l1 <= lc && w1 <= wc) &&
            ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc) ||
                (l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc))) {
            printf("YES");
        }
        else if (w1 <= lc && l1 <= wc &&
            ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1) ||
                (l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc))) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }

    return 0;
}
