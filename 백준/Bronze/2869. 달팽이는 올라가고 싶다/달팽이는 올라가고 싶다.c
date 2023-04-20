#include <stdio.h>

int main()
{
    double A, B, V;

    scanf("%lf %lf %lf", &A, &B, &V);

    int n = (int)((V - A) / (A - B)) + 1;
    if ((V - A) / (A - B) - n + 1 > 0)
    {
        n++;
    }

    printf("%d", n);

    return 0;
}