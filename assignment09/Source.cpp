#include<stdio.h>
int main()
{
	int x, sum = 0;
	scanf_s("%d", &x);
	printf("P(%d) = ", x);
	for (int a = 1; a < x; a++)
	{
		if (x % a == 0)
		{
			if (a != 1)
			{
				printf("+");
			}
			printf("%d", a);
			sum += a;
		}
	}
	printf(" = %d", sum);
	return 0;
}