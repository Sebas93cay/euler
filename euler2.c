#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0, suma = 2;
	int num = 2, num1 = 1, aux;

	while (num < 4000000)
	{
		aux = num;
		num = num + num1;
		num1 = aux;
		if (num % 2 == 0)
			suma = suma + num;
	}
	printf("%d\n", suma);
	return (0);
}
