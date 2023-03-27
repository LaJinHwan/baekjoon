#include <stdio.h>

int main()
{
	int a, b, min, max;

	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	min = (a * b / max);
	printf("%d\n", max);
	printf("%d\n", min);
}
