#include <stdio.h>
#include <string.h>
int main()
{
    char arr[51];
    int n;
    int k = 0;
    scanf("%d", &n);
    while (k < n)
    {
        scanf("%s", arr);
        int i = 0, cnt = 0;
        while (i < strlen(arr))
        {
            if (arr[i] == '(')
                cnt++;
            else
                cnt--;
            i++;
            if (cnt < 0)
            {
                printf("NO\n");
                break;
            }
        }
        if (cnt == 0)
            printf("YES\n");
        else if (cnt > 0)
            printf("NO\n");
        k++;
    }
}