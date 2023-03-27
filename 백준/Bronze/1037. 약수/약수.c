#include <stdio.h>

int main()
{
    int a;
    int min = 1000000, max = 0;
    scanf("%d", &a);
    int b;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (max < b)
            max = b;
        if (min >= b)
            min = b;
    }

    printf("%d", min * max);
}