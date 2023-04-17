#include <stdio.h>

int main()
{
    int q, w, e, r;
    int qua = 25;
    int dime = 10;
    int nick = 5;
    int pen = 1;
    float input;
    int time;
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        scanf("%f", &input);

        int cents = input;

        q = cents / qua;
        cents = cents % qua;

        w = cents / dime;
        cents = cents % dime;

        e = cents / nick;
        cents = cents % nick;

        r = cents / pen;

        printf("%d %d %d %d\n", q, w, e, r);
    }
    return 0;
}