#include <stdio.h>

#define EXIT_SUCCESS 0
int main(void)
{
    int sum;
    int P;
    int K;
    int C;

    scanf("%d", &sum);
    P = sum / 6;
    K = (sum / 3) * 2;
    C = sum / 6;
    printf("%d %d %d", P, K, C);

    return EXIT_SUCCESS;
}
