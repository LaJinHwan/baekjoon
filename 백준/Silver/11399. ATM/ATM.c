#include <stdio.h>
#define MAX 1000

int main()
{
    int person;
    int time[MAX];
    int min = 0;

    int tmp = 0;

    scanf("%d", &person);
    int count = person;
    for (int i = 0; i < person; i++)
    {
        scanf("%d", &time[i]);
    }

    for (int i = 0; i < person; i++)
    {
        for (int j = 0; j < person - 1; j++)
        {
            if (time[j] > time[j + 1])
            {
                tmp = time[j];
                time[j] = time[j + 1];
                time[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < person; i++)
    {
        min = min + (time[i] * count--);
    }
    printf("%d", min);
}