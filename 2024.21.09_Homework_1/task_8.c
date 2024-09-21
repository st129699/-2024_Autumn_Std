#include <stdio.h>

#define EXIT_SUCCESS 0
#define LEN 109
int main(void)
{
    int n;
    int sum;
    scanf("%d", &n);

    sum = (n % 10) + ((n / 10) % 10) + ((n / 100) % 10);
    printf("%d", sum);

    return EXIT_SUCCESS;
}