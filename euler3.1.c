#include <stdio.h>

int main(void)
{
	/*
	 *primos: array de primos descubiertos
	 *np: numero de primos descubiertos
	 */
	long int primos[1000], factores[1000];
//	long int n = 13195;
//	long int n = 15;
	long int n = 600851475143;
	long int k = 0, i = 2, np = 1, w = 0, p, nf = 0;

	/* EL primer primo es 2*/
	primos[0] = 2;
	while (i <= n)
	{
//		printf("Empezamos i = %ld\n", i);
		while (k < np && n != 1)
		{
//			printf("n  primos[k] -> %ld %ld \n", n, primos[k]);
			if (n % primos[k] == 0)
			{
				n = n / primos[k];
//				printf("ahora n es: %ld\n", n);
				factores[nf] = primos[k];
				nf++;
			}
			else
			{
				k++;
			}
		}
		if (n != 1)
		{
			i = primos[np - 1] + 1;
//			printf("ahora i es %ld\n", i);
			while (w < np)
			{
//				printf("i primos[w] -> %ld %ld\n", i, primos[w]);
				if (i % primos[w] == 0)
				{
					i++;
//					printf("ahora i es %ld\n", i);
					w = 0;
				}
				else
				{
					w++;
				}
			}
			w = 0;
			primos[np] = i;
			np++;
			/* printf("tenemos un nuevo primo, ahora hay %ld son:\n", np); */
			/* for (p = 0; p < np; p++) */
			/* { */
			/* 	printf("%ld ", primos[p]); */
			/* } */
			/* printf ("hay %ld primos\n", np); */
		}
	}
	for (p = 0; p < nf; p++)
	{
		printf("%ld ", factores[p]);
	}
	printf ("hay %ld factores\n", nf);

	return (0);
}
