#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int num = 0;

    while (scanf("%d", &a)>0)
    {

        
        for (int i = 1;; i++)
        {
            num = (num * 10) + 1;
            num = num % a;
            if (num == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
}