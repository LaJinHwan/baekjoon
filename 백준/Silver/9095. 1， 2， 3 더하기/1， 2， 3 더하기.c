#include <stdio.h>

int main()
{
    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;

    for (int i = 3; i < sizeof(arr) / 4; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    int b;
    int c;
    scanf("%d", &b);
    while (b > 0)
    {
        scanf("%d", &c);
        printf("%d\n", arr[c - 1]);
        b--;
    }
}