#include <stdio.h>

int main()
{
    int a;
    int cnt = 0;

    scanf("%d", &a);

    while (a >= 5)
    {
        cnt = cnt + (a / 5);
        a = a / 5;

        
    }
    printf("%d", cnt);
}