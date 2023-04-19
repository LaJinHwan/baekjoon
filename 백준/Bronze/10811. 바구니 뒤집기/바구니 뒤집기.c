#include <stdio.h>
#include <string.h>

void swap(int arr[], int start1, int end1)
{
    while (start1 < end1)
    {
        int tmp = arr[start1 - 1];
        arr[start1 - 1] = arr[end1 - 1];
        arr[end1 - 1] = tmp;
        start1++;
        end1--;
    }
}

int main()
{
    int N[100];
    int scan, change;
    int start, end;
    scanf("%d %d", &scan, &change);
    for (int i = 0; i < scan; i++)
    {
        N[i] = i + 1;
    }

    while (change > 0)
    {
        scanf("%d %d", &start, &end);
        swap(N, start, end);
        change--;
    }
    for (int i = 0; i < scan; i++)
    {
        printf("%d ", N[i]);
    }
}