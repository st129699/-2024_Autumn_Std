#include <stdio.h>

int main() 
{
    int K, W;
    int a1, b1, a2, b2, a3, b3;

    scanf("%d %d", &K, &W);
    scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);

    for (int mask = 0; mask < 8; mask++) 
    { 
        int total_weight = 0;
        int total_capacity = 0;

        if (mask & 1) {
            total_weight += a1;
            total_capacity += b1;
        }
        if (mask & 2) { 
            total_weight += a2;
            total_capacity += b2;
        }
        if (mask & 4) { 
            total_weight += a3;
            total_capacity += b3;
        }


        if (total_weight <= W && total_capacity >= K) {
            printf("YES\n");
            return 0; 
        }
    }


    printf("NO\n");
    return 0;
}






























//ой, а кто это написал...
//анекдот:https://pikabu.ru/story/anekdot_pro_nyuans__349792?ysclid=m1mknduxlj926745435