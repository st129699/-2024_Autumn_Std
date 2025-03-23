#include <stdio.h>

#define MIN(x, y, z) ((x) <= (y) && (x) <= (z) ? (x) : ((y) <= (x) && (y) <= (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) >= (y) && (x) >= (z) ? (x) : ((y) >= (x) && (y) >= (z) ? (y) : (z)))

int main(void) {
    int a_1, b_1, c_1;
    int a_2, b_2, c_2;
    int max1;
    int max2;
    int min1;
    int min2;
    int av1;
    int av2;


    scanf_s("%d %d %d", &a_1, &b_1, &c_1);
    scanf_s("%d %d %d", &a_2, &b_2, &c_2);

    min1 = MIN(a_1, b_1, c_1);
    max1 = MAX(a_1, b_1, c_1);
    av1 = a_1 + b_1 + c_1 - min1 - max1;

    min2 = MIN(a_2, b_2, c_2);
    max2 = MAX(a_2, b_2, c_2);
    av2 = a_2 + b_2 + c_2 - min2 - max2;

    if (min1 == min2 && av1 == av2 && max1 == max2) 
    {
        printf("Boxes are equal");
    }
    else if (min1 >= min2 && av1 >= av2 && max1 >= max2) 
    {
        printf("The first box is larger than the second one");
    }
    else if (min2 >= min1 && av2 >= av1 && max2 >= max1) 
    {
        printf("The first box is smaller than the second one");
    }
    else 
    {
        printf("Boxes are incomparable");
    }

    return 0;
}