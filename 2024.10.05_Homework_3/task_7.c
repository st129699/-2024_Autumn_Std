#include <stdio.h>

int main() 
{
    int n, m;
    int n2, m2;
    scanf_s("%d %d", &n, &m);
    n2 = n;
    m2 = m;

        while (m2 != 0) 
        {
            int temp = m2;
            m2 = n2 % m2;
            n2 = temp;
        }
    
    int k = n / n2;

    printf("%d", k);

    return 0;
}