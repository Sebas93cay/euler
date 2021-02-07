#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void printarray(long int array[], int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%ld ", array[i]);
	}
	printf("\n");
}

int main(void)
{
	long int n = 600851475143;
	long int primos[10000000];
	int np = 1, i, k;
	bool nuevoprimo;

	primos[0] = 2;
	for (i = 3; i < n; i++)
	{
		nuevoprimo = true;
		for (k = 0; k < np; k++)
		{
//			printf("Empezamos van %d primos y son:\n", np);
//			printarray(primos, np);
//			printf("%d residuo %ld = %ld\n", i, primos[k], i % primos[k]);
			if (i % primos[k] == 0)
			{
				nuevoprimo = false;
//				printf("%d es divisible entre %ld\n", i, primos[k]);
				break;
			}
		}
		if (nuevoprimo)
		{
//			printf("%d no es divisible por nadie hasta ahora\n", i);
			primos[np] = i;
			np++;
		}

	}
	for (i = 0; i < np; i++)
	{
		printf("%ld ", primos[i]);
	}
	printf("hay %d primos\n",np);

	/* printf("%ld\n", n); */
	return (0);
}
