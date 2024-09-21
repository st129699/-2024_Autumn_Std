#include <stdio.h>

#define EXIT_SUCCESS 0

int main(void)
{
    int VAL_1;
    int VAL_2;

    scanf("%d %d", &VAL_1, &VAL_2);
    printf("%d", VAL_1 + VAL_2);

    return EXIT_SUCCESS;
}