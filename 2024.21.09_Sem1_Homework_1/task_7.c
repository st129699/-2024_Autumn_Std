#include <stdio.h>

#define EXIT_SUCCESS 0
#define LEN 109
int main(void)
{
    int V;
    int T;
    int kil;
    int res;
    scanf("%d %d", &V, &T);

    kil = (V * T);
    res = (((kil % 109) + 109) % 109) + 1;
    printf("%d", res);

    return EXIT_SUCCESS;
}