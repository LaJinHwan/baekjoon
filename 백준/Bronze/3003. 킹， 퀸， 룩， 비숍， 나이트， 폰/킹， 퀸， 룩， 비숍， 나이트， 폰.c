#include <stdio.h>

int main()
{
    int k, q, l, b, n, p;
    int km = 1, qm = 1, lm = 2, bm = 2, nm = 2, pm = 8;

    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
    printf("%d %d %d %d %d %d", km - k, qm - q, lm - l, bm - b, nm - n, pm - p);
}