#include <stdio.h>

int main()
{
	int num;
	printf("input bilangan:	");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d adalah bilangan genap.", num);
	}
	else
		printf("%d adalah bilangan ganjil.", num);
	return 0;
}


