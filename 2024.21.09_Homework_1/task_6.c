#include <stdio.h>

#define EXIT_SUCCESS 0
int main(void)
{
    int VAL_L;
    int VAL_G;
    int GEN;
    scanf("%d %d", &VAL_L, &VAL_G);

    GEN = VAL_G + VAL_L;

    printf("%d %d", GEN - VAL_L - 1, GEN - VAL_G - 1);

    return EXIT_SUCCESS;
}