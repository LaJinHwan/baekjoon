#include <stdio.h>
#include <string.h>
int main()
{
    int time;
    char arr[1000];

    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        scanf("%s", arr);
        int a = strlen(arr);
        printf("%c%c\n", arr[0], arr[a - 1]);
    }
}