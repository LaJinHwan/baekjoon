#include <stdio.h>
#include <string.h>

int main()
{
    char num[15];
    int len;
    scanf("%s", num);

    char CSK = ' ';
    int sum = 0;
    len = strlen(num);

    for (int i = 0; i < len; i++)
    {
        CSK = num[i];
        switch (CSK)
        {
        case 'A':
        case 'B':
        case 'C':
            sum = sum + 2;
            break;
        case 'D':
        case 'E':
        case 'F':
            sum = sum + 3;
            break;
        case 'G':
        case 'H':
        case 'I':
            sum = sum + 4;
            break;
        case 'J':
        case 'K':
        case 'L':
            sum = sum + 5;
            break;
        case 'M':
        case 'N':
        case 'O':
            sum = sum + 6;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            sum = sum + 7;
            break;
        case 'T':
        case 'U':
        case 'V':
            sum = sum + 8;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            sum = sum + 9;
            break;
        }
    
    }
    sum = sum + len;
    printf("%d", sum);
}