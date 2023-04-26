#include <stdio.h>
int result(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    printf("%d", result(result(x, y), result((w - x), (h - y))));
}