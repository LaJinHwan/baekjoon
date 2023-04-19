#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int Max(int arr[], int size)
{
    int m = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= m)
        {
            m = arr[i];
        }
    }
    return m;
}
float rev(int arr[], int size, int value)
{
    float av = 0;
    float av2 = 0;
    for (int i = 0; i < size; i++)
    {
        av2 = (double)arr[i] / value * 100;
        av += av2;
    }
    av = av / size;
    return av;
}
int main()
{
    int a;
    int b[MAX];

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("%.6f", rev(b, a, Max(b, a)));
    return 0;
}