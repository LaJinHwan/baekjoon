#include <stdio.h>

int main()
{
    int N, M;
    int arr[100];
    int swap1, swap2;
    int tmp;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &swap1, &swap2);
        tmp = arr[swap1 - 1];
        arr[swap1 - 1] = arr[swap2 - 1];
        arr[swap2 - 1] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}