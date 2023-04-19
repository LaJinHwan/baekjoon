#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int child = i;
        do
        {
            int root = (child - 1) / 2;
            if (arr[root] < arr[child])
            {
                int tmp = arr[root];
                arr[root] = arr[child];
                arr[child] = tmp;
            }
            child = root;
        } while (child != 0);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        int root = 0;
        int child = 1;
        do
        {
            child = 2 * root + 1;

            if (child < i - 1 && arr[child] < arr[child + 1])
            {
                child++;
            }

            if (child < i && arr[root] < arr[child])
            {
                int temp = arr[root];
                arr[root] = arr[child];
                arr[child] = temp;
            }
            root = child;
        } while (child < i);
    }
}

int main()
{
    int n[MAX];
    int scan;

    
    scanf("%d", &scan);

    if (scan > MAX)
    {
        printf("Error: The size of the array exceeds the maximum limit.\n");
        exit(1);
    }

    
    for (int i = 0; i < scan; i++)
    {
        scanf("%d", &n[i]);
    }

    sort(n, scan);

    
    for (int i = 0; i < scan; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}