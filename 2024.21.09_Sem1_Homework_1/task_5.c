
#include <stdio.h>

#define EXIT_SUCCESS 0
int main(void)
{
    int number;
    scanf("%d", &number);

    printf("The next number for the number %d is %d.\n", number, number + 1);
    printf("The previous number for the number %d is %d.", number, number - 1);
    return EXIT_SUCCESS;
}