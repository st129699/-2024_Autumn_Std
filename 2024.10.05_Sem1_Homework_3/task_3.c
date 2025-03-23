#include <stdio.h>

int main(void) {
    int n;
    int a;
    int cnt = 0;

    scanf_s("%d", &n); 

    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d", &a);

        if (a > 437) 
        {
            continue;
        }
        else {
            cnt += 1;
            printf("Crash %d\n", i + 1);
            break;
        }
    }

    if (cnt == 0) 
    { 
        printf("No crash\n");
    }

    return 0;
}