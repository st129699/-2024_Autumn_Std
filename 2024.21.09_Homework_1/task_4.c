#include <stdio.h>

#define EXIT_SUCCESS 0

int main(void)
{
    int A;
    int B;
    int N;

    scanf("%d %d %d", &N, &A, &B);

    printf("%d", N * A * B * 2);

    return EXIT_SUCCESS;
}