#include <stdio.h>

int main()
{
    int a;
    long long sum = 0;
    scanf("%d", &a);

    for (int i = 1; i < a + 1; i++)
    {
        sum += i * (a / i);
    }

    printf("%lld", sum);
}